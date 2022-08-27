// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimeReverseGameMode.h"
#include "TimeReverseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimeReverseGameMode::ATimeReverseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
