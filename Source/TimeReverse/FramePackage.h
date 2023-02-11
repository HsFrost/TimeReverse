#pragma once

#include "Math/Vector.h"
#include "Math/Rotator.h"
#include "Math/Vector.h"

struct FFramePackage
{
	FORCEINLINE FFramePackage();
	FORCEINLINE FFramePackage(FVector InLocation, FRotator InRotation,FVector InLinearVelocity,
		FVector InAngularVelocity, float InDeltaTime);
	
	FVector Location;
	FVector Rotation;
	FVector LinearVelocity;
	FVector AngularVelocity;

	bool bIsPlayerPawn;
	FVector2D MouseXY;

	float DeltaTime;
};

FFramePackage::FFramePackage()
{
		
}

FFramePackage::FFramePackage(FVector InLocation, FRotator InRotation, FVector InLinearVelocity, FVector InAngularVelocity, float InDeltaTime):Location(InLocation),Rotation(InLocation),LinearVelocity(InLinearVelocity),AngularVelocity(InAngularVelocity),DeltaTime(InDeltaTime)
{
	
}





