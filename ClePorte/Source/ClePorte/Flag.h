// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Flag.generated.h"

USTRUCT(BlueprintType)


struct CLEPORTE_API FFlag
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag")
	FString category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag")
	FString FlagName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag")
	int value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag")
	bool Exact;
};