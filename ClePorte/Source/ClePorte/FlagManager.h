// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlagList.h"
#include "FlagManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFlagValueChanged);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CLEPORTE_API UFlagManager : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFlagManager();
	UFUNCTION(BlueprintCallable, Category = "Flag")
	bool IsFlagValid(const FString category, const FString flagName)const;
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void EditFlag(const FString category, const FString flagName, const int& value);
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void incrementFlag(const FString& category, const FString& FlagName);
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void decrementFlag(const FString& category, const FString& FlagName);
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void ResetFlagCategory(const FString& category);
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void ResetAllFlags();
	UFUNCTION(BlueprintCallable, Category = "Flag")
	bool IsFlagTrigger(const FString category, const FString flagName, const int& value, bool exact);
	UFUNCTION(BlueprintCallable, Category = "Flag")
	int GetFlagValue(const FString category, const FString flagName);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:

	void CreateFlag();

	const FString GetFlagKey(const FString category, const FString flagName) const;

public:
	FFlagValueChanged OnFlagChanged;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Flag", meta = (AllowPrivateAccess = "true"))
	TArray<FFlagList> Flags;

	TMap<FString, int> mFlagValues;

};

