// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InteractionWidget.h"
#include "LeHUD.generated.h"

/**
 * 
 */
UCLASS()
class CLEPORTE_API ALeHUD : public AHUD
{
	GENERATED_BODY()

public:
	void SetInteractionDescription(const FString& description);
	void SetInteractionPosition(const FVector2D& position);


protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UInteractionWidget> mInteractionWidgetPrefab;


	UInteractionWidget* mInteractionWidget;
};
