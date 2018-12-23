// Fill out your copyright notice in the Description page of Project Settings.

#include "SantaGameInstance.h"

void USantaGameInstance::SetSoundVolume(float newSoundVolume)
{
	SoundVolume = newSoundVolume;
}

void USantaGameInstance::SetMusicVolume(float newMusicVolume)
{
	MusicVolume = newMusicVolume;
}

void USantaGameInstance::SetDifficulity(int newDifficulity)
{
	Difficulity = newDifficulity;
}
