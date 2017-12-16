// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DungeonDefendersGameMode.h"
#include "DungeonDefendersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonDefendersGameMode::ADungeonDefendersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
