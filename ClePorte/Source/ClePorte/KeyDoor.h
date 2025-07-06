#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "KeyDoor.generated.h"

//class UStaticMeshComponent;
//class USceneComponent;
//class UMaterialInterface;


UCLASS()
class CLEPORTE_API AKeyDoor : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	AKeyDoor();

protected:
	virtual void BeginPlay() override;

public:
	// Fonctions de l�interface IInteractable
	virtual void interact_Implementation() override;
	virtual FVector GetPositionUI_Implementation() override;
	virtual FString GetUIText_Implementation() override;

	//Id unique de la cl�
	UPROPERTY(EditAnywhere, Category = "Key")
	int32 ID;

	// Mesh assignable � la cl�
	UPROPERTY(EditAnywhere, Category = "Key")
	UStaticMesh* KeyMesh;

	//Liste de mat�riaux utilisable en fonction de l'id
	UPROPERTY(EditAnywhere, Category = "Key")
	TArray<UMaterialInterface*> Materials;

private:
	//Racine qui sera utilis� pour le bp
	UPROPERTY()
	USceneComponent* Root;

	//Le mesh 
	UPROPERTY()
	UStaticMeshComponent* Mesh;


	UPROPERTY()
	USceneComponent* UIPoint;
};
