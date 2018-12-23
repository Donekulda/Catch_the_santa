// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Catch_the_SantaGameMode.h"
#include "GameFramework/Character.h"
#include "SantaAICharacter.generated.h"

UCLASS()
class CATCH_THE_SANTA_API ASantaAICharacter : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		uint16 Health = 3;

public:
	// Sets default values for this character's properties
	ASantaAICharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bIsCatched;

	ACatch_the_SantaGameMode* GameMode;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void looseHealth();

	int GetHealth() { return Health; }
	
};
