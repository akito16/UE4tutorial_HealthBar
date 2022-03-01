// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tutorial_HealthBarGameMode.h"
#include "Tutorial_HealthBarCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorial_HealthBarGameMode::ATutorial_HealthBarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
