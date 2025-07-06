// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FlagList.generated.h"

USTRUCT(BlueprintType)


struct CLEPORTE_API FFlagList
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "Flag")
	FString Category;
	UPROPERTY(EditDefaultsOnly, Category = "Flag")
	TArray<FString> Flags;
};

