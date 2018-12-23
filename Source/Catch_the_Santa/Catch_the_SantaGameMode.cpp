// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Catch_the_SantaGameMode.h"
#include "Catch_the_SantaPlayerController.h"
#include "Catch_the_SantaCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "SantaAICharacter.h"

ACatch_the_SantaGameMode::ACatch_the_SantaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACatch_the_SantaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/Kid01"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}

void ACatch_the_SantaGameMode::BeginPlay()
{
	bIsLostHealth = false;
	Health = Difficulity;
}

void ACatch_the_SantaGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACatch_the_SantaGameMode::setHealth(int newHealth)
{
	if (Health > newHealth) {
		bIsLostHealth = true;
	}
	Health = newHealth;
	
}

int ACatch_the_SantaGameMode::getHealth()
{
	return Health;
}

bool ACatch_the_SantaGameMode::IsLostHealth()
{
	if (bIsLostHealth) {
		bIsLostHealth = false;
		return true;
	}
	else {
		return false;
	}
}

void ACatch_the_SantaGameMode::win()
{
	UE_LOG(LogTemp, Warning, TEXT("You Won the GAME!!!"));
	//SetCurrentState(EGamePlayState::EWon);
}

int ACatch_the_SantaGameMode::GetMaxHealth()
{
	return Difficulity;
}
/*
void ACatch_the_SantaGameMode::SetCurrentState(EGamePlayState NewState)
{
	CurrentState = NewState;
}
*/
void ACatch_the_SantaGameMode::GameOver()
{
	UE_LOG(LogTemp, Warning, TEXT("You LOST!!!"));
	//SetCurrentState(EGamePlayState::EGameOver);
}
