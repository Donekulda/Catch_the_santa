// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SantaGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CATCH_THE_SANTA_API USantaGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
private:
	int Difficulity;
	float SoundVolume;
	float MusicVolume;
	
public:
	UFUNCTION(BlueprintPure)
	int GetMaxHealth() { return Difficulity; }

	UFUNCTION(BlueprintPure)
		float GetSoundVolume() { return SoundVolume; }

	UFUNCTION(BlueprintPure)
		float GetMusicVolume() { return MusicVolume; }

	UFUNCTION(BlueprintCallable)
		void SetSoundVolume(float newSoundVolume);

	UFUNCTION(BlueprintCallable)
		void SetMusicVolume(float newMusicVolume);

	UFUNCTION(BlueprintCallable)
		void SetDifficulity(int newDifficulity);
};
