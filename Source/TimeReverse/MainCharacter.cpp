// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "GameFramework/SpringArmComponent.h" 
#include "Camera/CameraComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//创建组件
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponet"));
	StaticMeshComp = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));

	//绑定组件
	StaticMeshComp->SetupAttachment(RootComponent);
	SpringArmComp->SetupAttachment(StaticMeshComp);
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

	//为SpringArm类的变量赋值。
	SpringArmComp->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	SpringArmComp->TargetArmLength = 400.f;
	SpringArmComp->bEnableCameraLag = true;
	SpringArmComp->CameraLagSpeed = 3.0f;

	//控制默认玩家
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // 按下ZoomIn按钮时进行放大，否则恢复正常
    {
        if (bZoomingIn)
        {
            ZoomFactor += DeltaTime / 0.5f;         //Zoom in over half a second
        }
        else
        {
            ZoomFactor -= DeltaTime / 0.25f;        //Zoom out over a quarter of a second
        }
        ZoomFactor = FMath::Clamp<float>(ZoomFactor, 0.0f, 1.0f);
        // 基于ZoomFactor设置摄像机的视野和SpringArm的长度 
        CameraComp->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, ZoomFactor);
        SpringArmComp->TargetArmLength = FMath::Lerp<float>(400.0f, 300.0f, ZoomFactor);
    }
   
    // 旋转Actor的偏转角度，由于摄像机与Actor相互绑定，因此摄像机也会偏转
    {
        FRotator NewRotation = GetActorRotation();
        NewRotation.Yaw += CameraInput.X;
        SetActorRotation(NewRotation);
    }

    // 旋转摄像机的俯仰角度，但对其进行限制，确保我们始终朝下看
    {
        FRotator NewRotation = SpringArmComp->GetComponentRotation();
        NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
        SpringArmComp->SetWorldRotation(NewRotation);
    }

    // 根据"MoveX"和"MoveY"的处理移动
    {
        if (!MovementInput.IsZero())
        {
            //Scale our movement input axis values by 100 units per second
            MovementInput = MovementInput.GetSafeNormal() * 100.0f;
            FVector NewLocation = GetActorLocation();
            NewLocation += GetActorForwardVector() * MovementInput.X * DeltaTime;
            NewLocation += GetActorRightVector() * MovementInput.Y * DeltaTime;
            SetActorLocation(NewLocation);
        }
    }
}

// 用于绑定输入和函数
void AMainCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
    Super::SetupPlayerInputComponent(InputComponent);

    // 为"ZoomIn"事件绑定函数
    InputComponent->BindAction("ZoomIn", IE_Pressed, this, &AMainCharacter::ZoomIn);
    InputComponent->BindAction("ZoomIn", IE_Released, this, &AMainCharacter::ZoomOut);

    // 分别为四个方向轴的移动事件绑定函数
    InputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
    InputComponent->BindAxis("CameraPitch", this, &AMainCharacter::PitchCamera);
    InputComponent->BindAxis("CameraYaw", this, &AMainCharacter::YawCamera);
}

// 输入函数
void AMainCharacter::MoveForward(float AxisValue)
{
    MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void AMainCharacter::MoveRight(float AxisValue)
{
    MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void AMainCharacter::PitchCamera(float AxisValue)
{
    CameraInput.Y = AxisValue;
}

void AMainCharacter::YawCamera(float AxisValue)
{
    CameraInput.X = AxisValue;
}

void AMainCharacter::ZoomIn()
{
    bZoomingIn = true;
}

void AMainCharacter::ZoomOut()
{
    bZoomingIn = false;
}





