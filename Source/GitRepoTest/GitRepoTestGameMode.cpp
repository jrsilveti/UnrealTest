// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitRepoTestGameMode.h"
#include "GitRepoTestPlayerController.h"
#include "GitRepoTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitRepoTestGameMode::AGitRepoTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGitRepoTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}