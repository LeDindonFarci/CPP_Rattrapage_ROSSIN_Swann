// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LeHUD.h"
#include "FlagManager.h"
#include "FlagGameMode.generated.h"

/**
 *
 */
UCLASS()
class CLEPORTE_API AFlagGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFlagGameMode();

	UFUNCTION(BlueprintCallable, Category = "Flag")
	UFlagManager* GetFlagManager() const;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Flag", meta = (AllowPrivateAccess = "true"))
	UFlagManager* mFlagManager;

};