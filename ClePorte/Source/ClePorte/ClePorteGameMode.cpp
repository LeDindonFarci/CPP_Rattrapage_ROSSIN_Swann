// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClePorteGameMode.h"
#include "ClePorteCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClePorteGameMode::AClePorteGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	mFlagManager = CreateDefaultSubobject<UFlagManager>(TEXT("Flag Manager"));
}

UFlagManager* AClePorteGameMode::GetFlagManager() const
{
	return mFlagManager;
}
