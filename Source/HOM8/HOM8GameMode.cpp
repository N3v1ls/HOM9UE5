// Copyright Epic Games, Inc. All Rights Reserved.

#include "HOM8GameMode.h"
#include "HOM8Character.h"
#include "UObject/ConstructorHelpers.h"

AHOM8GameMode::AHOM8GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
