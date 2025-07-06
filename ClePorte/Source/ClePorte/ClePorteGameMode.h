// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FlagManager.h"
#include "ClePorteGameMode.generated.h"

UCLASS()
class AClePorteGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AClePorteGameMode();

	UFUNCTION(BlueprintCallable, Category = "Flag")
	UFlagManager* GetFlagManager() const;


private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Flag", meta = (AllowPrivateAccess = "true"))
	UFlagManager* mFlagManager;
};



