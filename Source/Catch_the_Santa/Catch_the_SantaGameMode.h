// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Catch_the_SantaGameMode.generated.h"

/*
UENUM(BlueprintType)
enum class EGamePlayState : uint8
{
	EPLaying,
	EGameOver,
	EWon,
	EPaused,
	EUnknown
};
*/
UCLASS(minimalapi)
class ACatch_the_SantaGameMode : public AGameModeBase
{
	GENERATED_BODY()

	//Function thats called when its GameOver (Santa run away or got to the tree)
	UFUNCTION()
	void GameOver();

private:

	int Difficulity;
	int Health;
	bool bIsLostHealth;

	//EGamePlayState CurrentState;

protected:

public:

	ACatch_the_SantaGameMode();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void setHealth(int newHealth);

	UFUNCTION(BlueprintPure)
	int getHealth();

	UFUNCTION(BlueprintPure)
	bool IsLostHealth();


	//Function thats called if the game was won
	void win();

	int GetMaxHealth();
/*
	UFUNCTION(BlueprintPure)
		EGamePlayState GetCurrentState() const { return CurrentState; }

	void SetCurrentState(EGamePlayState NewState);
*/
};



