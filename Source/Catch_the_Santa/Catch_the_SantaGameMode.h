// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Catch_the_SantaGameMode.generated.h"

UCLASS(minimalapi)
class ACatch_the_SantaGameMode : public AGameModeBase
{
	GENERATED_BODY()

	//Function thats called when its GameOver (Santa run away or got to the tree)
	UFUNCTION()
	void GameOver();

private:

public:
	ACatch_the_SantaGameMode();

	virtual void Tick(float DeltaTime) override;

	//Function thats called if the game was won
	void win();
};



