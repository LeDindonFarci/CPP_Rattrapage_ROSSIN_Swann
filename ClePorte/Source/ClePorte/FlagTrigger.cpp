// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagTrigger.h"

// Sets default values for this component's properties
UFlagTrigger::UFlagTrigger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


bool UFlagTrigger::IsFlagTriggered()
{
	UWorld* world = GetWorld();
	if (world == nullptr)
		return false;

	AClePorteGameMode* gamemode = Cast<AClePorteGameMode>(world->GetAuthGameMode());
	if (gamemode == nullptr)
		return false;

	UFlagManager* flagManager = gamemode->GetFlagManager();

	for (int i = 0; i < mFlags.Num();i++)
	{
		FString category = mFlags[i].category;
		FString FlagName = mFlags[i].FlagName;
		int value = mFlags[i].value;
		bool exact = mFlags[i].Exact;
		if (!flagManager->IsFlagTrigger(category, FlagName, value, exact))
			return false;
	}
	return true;
}

bool UFlagTrigger::IsOneFlagTriggered(int flag)
{
	UWorld* world = GetWorld();
	if (world == nullptr)
		return false;

	AClePorteGameMode* gamemode = Cast<AClePorteGameMode>(world->GetAuthGameMode());
	if (gamemode == nullptr)
		return false;

	UFlagManager* flagManager = gamemode->GetFlagManager();

	for (int i = 0; i < mFlags.Num();i++)
	{
		if (i == flag)
		{
			FString category = mFlags[i].category;
			FString FlagName = mFlags[i].FlagName;
			int value = mFlags[i].value;
			bool exact = mFlags[i].Exact;
			if (flagManager->IsFlagTrigger(category, FlagName, value, exact))
				return true;
		}
	}
	return false;

}

void UFlagTrigger::setFlagListNumber(int number)
{
	FlagNumber = number;
}

int UFlagTrigger::GetFlagListNumber()
{
	return FlagNumber;
}

int UFlagTrigger::GetFlagValue(int NumberList)
{

	UWorld* world = GetWorld();
	if (world == nullptr)
		return false;

	AClePorteGameMode* gamemode = Cast<AClePorteGameMode>(world->GetAuthGameMode());
	if (gamemode == nullptr)
		return false;

	UFlagManager* flagManager = gamemode->GetFlagManager();

	for (int i = 0; i < mFlags.Num();i++)
	{
		if (i == NumberList)
		{
			FString category = mFlags[i].category;
			FString FlagName = mFlags[i].FlagName;

			return flagManager->GetFlagValue(category, FlagName);
		}
	}
	return 0;
}


void UFlagTrigger::BeginPlay()
{
	Super::BeginPlay();

	UWorld* world = GetWorld();
	if (world != nullptr)
	{
		FTimerHandle timerHandle;
		world->GetTimerManager().SetTimer(timerHandle, this, &UFlagTrigger::CheckFlagsValidity, 0.01f, false);
	}

}

void UFlagTrigger::BeginDestroy()
{
	Super::BeginDestroy();

	UWorld* world = GetWorld();
	if (world == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Flag check : can't get world"));
		return;
	}


	AClePorteGameMode* gamemode = Cast<AClePorteGameMode>(world->GetAuthGameMode());

	if (gamemode == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Flag check : can't get GameMode"));
		return;

	}

	UFlagManager* flagManager = gamemode->GetFlagManager();

	if (mListen)
		flagManager->OnFlagChanged.RemoveDynamic(this, &UFlagTrigger::FlagTriggerCallback);

}

void UFlagTrigger::CheckFlagsValidity()
{
	UWorld* world = GetWorld();
	if (world == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Flag check : can't get world"));
		return;
	}


	AClePorteGameMode* gamemode = Cast<AClePorteGameMode>(world->GetAuthGameMode());

	if (gamemode == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Flag check : can't get GameMode"));
		return;

	}

	UFlagManager* flagManager = gamemode->GetFlagManager();

	for (int i = 0; i < mFlags.Num();i++)
	{
		if (!flagManager->IsFlagValid(mFlags[i].category, mFlags[i].FlagName))
			UE_LOG(LogTemp, Error, TEXT("Flag doesn't exist : %s"), *mFlags[i].category, *mFlags[i].FlagName);

	}

	if (mListen)
		flagManager->OnFlagChanged.AddDynamic(this, &UFlagTrigger::FlagTriggerCallback);
}

void UFlagTrigger::FlagTriggerCallback()
{
	if (IsFlagTriggered())
		OnFlagChanged.Broadcast();

	if (IsOneFlagTriggered(FlagNumber))
		OnFlagChanged.Broadcast();
}



