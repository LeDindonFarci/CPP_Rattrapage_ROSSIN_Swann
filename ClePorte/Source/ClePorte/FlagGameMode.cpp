// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagGameMode.h"

AFlagGameMode::AFlagGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
		DefaultPawnClass = PlayerPawnBPClass.Class;
}

UFlagManager* AFlagGameMode::GetFlagManager() const
{
	return mFlagManager;
}