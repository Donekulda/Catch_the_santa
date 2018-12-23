// Fill out your copyright notice in the Description page of Project Settings.

#include "SantaAICharacter.h"


// Sets default values
ASantaAICharacter::ASantaAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bIsCatched = false;

}

// Called when the game starts or when spawned
void ASantaAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
	GameMode = Cast<ACatch_the_SantaGameMode>(GetWorld()->GetAuthGameMode());

	Health = GameMode->GetMaxHealth();
}

// Called every frame
void ASantaAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASantaAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASantaAICharacter::looseHealth()
{
	Health--;
	GameMode->setHealth(Health);
	if (Health <= 0) {
		bIsCatched = true;
		GameMode->win();
	}
		
}


