// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Flag.h"
#include "ClePorteGameMode.h"
#include "FlagTrigger.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CLEPORTE_API UFlagTrigger : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFlagTrigger();
	UFUNCTION(BlueprintCallable)
	bool IsFlagTriggered();
	UFUNCTION(BlueprintCallable)
	bool IsOneFlagTriggered(int flag);
	UFUNCTION(BlueprintCallable)
	void setFlagListNumber(int number);
	UFUNCTION(BlueprintCallable)
	int GetFlagListNumber();
	UFUNCTION(BlueprintCallable)
	int GetFlagValue(int NumberList);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

private:
	void CheckFlagsValidity();
	UFUNCTION()
	void FlagTriggerCallback();

public:
	UPROPERTY(BlueprintAssignable)
	FFlagValueChanged OnFlagChanged;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Flag", meta = (AllPrivateAccess = "true"))
	TArray<FFlag> mFlags;
	UPROPERTY(EditDefaultsOnly, Category = "Flag", meta = (AllPrivateAccess = "true"))
	bool mListen;
	UPROPERTY(EditDefaultsOnly, Category = "Flag", meta = (AllPrivateAccess = "true"))
	int FlagNumber;
};

