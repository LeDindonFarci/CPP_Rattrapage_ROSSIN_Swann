#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "FlagTrigger.h"
#include "Components/TimelineComponent.h"
#include "Door.generated.h"

UCLASS()
class CLEPORTE_API ADoor : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	ADoor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Interact_Implementation();
	virtual FVector GetPositionUI_Implementation() override;
	virtual FString GetUIText_Implementation() override;

private:
	//
	UFUNCTION()
	void MoveDoor(float Time);

	void UpdateUIText();

public:
	//Tout ceci permet de crée les futur composant de tout ce dont on a besoin, entre autre, les meshs de la porte, les serrures, ainsi que les UI dont nous aurons besoin
	UPROPERTY(EditAnywhere, Category = "Meshes")
	UStaticMeshComponent* LeftDoor;

	UPROPERTY(EditAnywhere, Category = "Meshes")
	UStaticMeshComponent* RightDoor;

	UPROPERTY(EditAnywhere, Category = "Meshes")
	UStaticMeshComponent* LeftLock;

	UPROPERTY(EditAnywhere, Category = "Meshes")
	UStaticMeshComponent* RightLock;

	UPROPERTY(EditAnywhere, Category = "UI")
	USceneComponent* CenterUI;

	UPROPERTY(EditAnywhere, Category = "UI")
	USceneComponent* LeftUI;

	UPROPERTY(EditAnywhere, Category = "UI")
	USceneComponent* RightUI;

	//Ceci permet de crée la curve qu'on utilise lors de notre Timeline
	UPROPERTY(EditAnywhere, Category = "Timeline")
	UCurveFloat* Curve;
	
	//Ici on vient setup la vitesse d'animation
	UPROPERTY(EditAnywhere, Category = "Timeline")
	float OpenSpeed = 1.0f;

	//Là on crée les flag de détection des clé
	UPROPERTY(EditAnywhere, Category = "Flags")
	bool bKey0Inserted = false;

	UPROPERTY(EditAnywhere, Category = "Flags")
	bool bKey1Inserted = false;

	//Ici on crée la timeline
	UPROPERTY()
	UTimelineComponent* Timeline;


	UPROPERTY()
	UFlagTrigger* FlagTrigger;

	UPROPERTY()
	FVector LeftInitialRotation;

	UPROPERTY()
	FVector RightInitialRotation;

	UPROPERTY()
	FOnTimelineFloat TimelineCallback;

	bool bIsOpen = false;
	FString CurrentUIText;
};
