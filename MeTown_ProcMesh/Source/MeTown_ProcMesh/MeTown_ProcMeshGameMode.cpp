// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeTown_ProcMeshGameMode.h"
#include "MeTown_ProcMeshCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeTown_ProcMeshGameMode::AMeTown_ProcMeshGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
