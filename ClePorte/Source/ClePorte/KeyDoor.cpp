#include "KeyDoor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "FlagGameMode.h"
#include "FlagManager.h"
#include "LeHUD.h"
#include "Kismet/GameplayStatics.h"

AKeyDoor::AKeyDoor()
{
	PrimaryActorTick.bCanEverTick = false;

	// Composant racine sur lequel tout est attaché
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	// Mesh de la clé attaché à la racine
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Key Mesh"));
	Mesh->SetupAttachment(Root);

	// Point d’affichage du texte attaché à la racine
	UIPoint = CreateDefaultSubobject<USceneComponent>(TEXT("UI Point"));
	UIPoint->SetupAttachment(Root);
}

void AKeyDoor::BeginPlay()
{
	Super::BeginPlay();

	// Appliquer le mesh personnalisé s’il est assigné
	if (KeyMesh)
	{
		Mesh->SetStaticMesh(KeyMesh);
	}

	// Appliquer le matériau correspondant à l’ID
	if (Materials.IsValidIndex(ID))
	{
		Mesh->SetMaterial(0, Materials[ID]);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Clé %s : ID %d invalide pour les matériaux."), *GetName(), ID);
	}
}

void AKeyDoor::interact_Implementation()
{
	// Définir le flag : "KEY_ID"
	if (UWorld* World = GetWorld())
	{
		if (AFlagGameMode* GM = Cast<AFlagGameMode>(World->GetAuthGameMode()))
		{
			if (UFlagManager* FM = GM->GetFlagManager())
			{
				const FString FlagName = FString::Printf(TEXT("KEY_%d"), ID);
				FM->EditFlag("KEY", FlagName, 1);
				UE_LOG(LogTemp, Log, TEXT("Flag [%s] défini."), *FlagName);
			}
		}
	}

	// Supprimer le texte du HUD
	if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
	{
		if (ALeHUD* HUD = Cast<ALeHUD>(PC->GetHUD()))
		{
			HUD->SetInteractionDescription("");
		}
	}

	// Détruire la clé
	Destroy();
}

FVector AKeyDoor::GetPositionUI_Implementation()
{
	return UIPoint->GetComponentLocation();
}

FString AKeyDoor::GetUIText_Implementation()
{
	return FString::Printf(TEXT("Ramasser la clé %d"), ID);
}
