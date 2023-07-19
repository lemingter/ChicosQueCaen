// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerRunnerGameMode.h"
#include "MultiplayerRunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerRunnerGameMode::AMultiplayerRunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
