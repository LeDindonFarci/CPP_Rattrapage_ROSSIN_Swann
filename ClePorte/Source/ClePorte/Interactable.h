// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"


/**
 * 
 */
UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};


class CLEPORTE_API IInteractable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interact")
	void interact();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interact")
	FVector GetPositionUI();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interact")
	FString GetUIText();
};
