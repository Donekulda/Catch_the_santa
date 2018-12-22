// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Catch_the_SantaGameMode.h"
#include "Catch_the_SantaPlayerController.h"
#include "Catch_the_SantaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACatch_the_SantaGameMode::ACatch_the_SantaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACatch_the_SantaPlayerController::StaticClass();

}