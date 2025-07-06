// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagManager.h"


// Sets default values for this component's properties
UFlagManager::UFlagManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UFlagManager::BeginPlay()
{
	Super::BeginPlay();

	CreateFlag();

}

void UFlagManager::EditFlag(const FString category, const FString flagName, const int& value)
{
	FString key = GetFlagKey(category, flagName);
	mFlagValues[key] = value;

	OnFlagChanged.Broadcast();

}

void UFlagManager::incrementFlag(const FString& category, const FString& FlagName)
{
	FString key = GetFlagKey(category, FlagName);
	mFlagValues[key] += 1;

	OnFlagChanged.Broadcast();

}

void UFlagManager::decrementFlag(const FString& category, const FString& FlagName)
{
	FString key = GetFlagKey(category, FlagName);
	mFlagValues[key] -= 1;

	OnFlagChanged.Broadcast();

}

void UFlagManager::ResetFlagCategory(const FString& category)
{
	for (const auto& [key, value] : mFlagValues)
	{
		FString KeyCategory = "";
		FString KeyFlagName = "";
		key.Split(":", &KeyCategory, &KeyFlagName);

		if (category == KeyCategory)
			mFlagValues[key] = 0;
	}
	OnFlagChanged.Broadcast();

}

void UFlagManager::ResetAllFlags()
{
	for (const auto& [key, value] : mFlagValues)
	{
		mFlagValues[key] = 0;
	}

	OnFlagChanged.Broadcast();
}

bool UFlagManager::IsFlagTrigger(const FString category, const FString flagName, const int& value, bool exact)
{
	FString key = GetFlagKey(category, flagName);
	int flagvalue = mFlagValues[key];

	if (exact && flagvalue == value)
		return true;
	else if (!exact && flagvalue >= value)
		return true;

	return false;
}

int UFlagManager::GetFlagValue(const FString category, const FString flagName)
{
	FString key = GetFlagKey(category, flagName);

	return mFlagValues[key];
}

bool UFlagManager::IsFlagValid(const FString category, const FString flagName)const
{
	FString key = GetFlagKey(category, flagName);
	return mFlagValues.Contains(key);
}

void UFlagManager::CreateFlag()
{
	mFlagValues = TMap<FString, int>();
	for (int catergoryindex = 0; catergoryindex < Flags.Num(); catergoryindex++)
	{
		FFlagList flaglist = Flags[catergoryindex];
		for (int flagindex = 0; flagindex < flaglist.Flags.Num(); flagindex++)
		{
			FString key = GetFlagKey(flaglist.Category, flaglist.Flags[flagindex]);
			mFlagValues.Add(key, 0);
		}
	}
}

const FString UFlagManager::GetFlagKey(const FString category, const FString flagName) const
{
	return category + ":" + flagName;
}
