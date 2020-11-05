// Copyright Epic Games, Inc. All Rights Reserved.

#include "TryoneTryGameMode.h"
#include "TryoneTryCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATryoneTryGameMode::ATryoneTryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
