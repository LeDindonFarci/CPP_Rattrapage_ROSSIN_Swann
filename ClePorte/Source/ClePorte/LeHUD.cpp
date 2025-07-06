// Fill out your copyright notice in the Description page of Project Settings.


#include "LeHUD.h"

void ALeHUD::SetInteractionDescription(const FString& description)
{
	mInteractionWidget->SetDescription(description);
}

void ALeHUD::SetInteractionPosition(const FVector2D& position)
{
	mInteractionWidget->SetPosition(position);
}

void ALeHUD::BeginPlay()
{
	mInteractionWidget = Cast<UInteractionWidget>(CreateWidget(GetWorld(), mInteractionWidgetPrefab));
	mInteractionWidget->AddToViewport();
}