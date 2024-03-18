// Copyright Epic Games, Inc. All Rights Reserved.

#include "MySecondProjectGameMode.h"
#include "MySecondProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMySecondProjectGameMode::AMySecondProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
