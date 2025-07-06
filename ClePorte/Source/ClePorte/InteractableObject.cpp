// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObject.h"

// Sets default values
AInteractableObject::AInteractableObject()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	Aspect = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Aspect->SetupAttachment(RootComponent);

	UiPointingLocation = CreateDefaultSubobject<USceneComponent>(TEXT("UI Point"));
	UiPointingLocation->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AInteractableObject::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AInteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableObject::interact_Implementation()
{
	Aspect->SetVisibility(false, true);
}

FVector AInteractableObject::GetPositionUI_Implementation()
{
	return UiPointingLocation->GetComponentLocation();
}

FString AInteractableObject::GetUIText_Implementation()
{
	return Description;
}
