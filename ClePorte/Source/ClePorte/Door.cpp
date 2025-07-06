#include "Door.h"
#include "FlagGameMode.h"
#include "FlagManager.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "LeHUD.h"
//Cela contient la définition du Uworld qui représente le monde de jeu en cour
#include "Engine/World.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = false;

	//La racine sur laquelle on vient tout greffé pour le BP
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	//Le mesh de la porte gauche on fait pareil avec les serrures et la porte droite
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetupAttachment(RootComponent);

	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoor->SetupAttachment(RootComponent);

	LeftLock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftLock"));
	LeftLock->SetupAttachment(LeftDoor);

	RightLock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightLock"));
	RightLock->SetupAttachment(RightDoor);

	//Les UI, elle s'attache aussi au root
	CenterUI = CreateDefaultSubobject<USceneComponent>(TEXT("CenterUI"));
	CenterUI->SetupAttachment(RootComponent);

	LeftUI = CreateDefaultSubobject<USceneComponent>(TEXT("LeftUI"));
	LeftUI->SetupAttachment(LeftLock);

	RightUI = CreateDefaultSubobject<USceneComponent>(TEXT("RightUI"));
	RightUI->SetupAttachment(RightLock);

	//On génére la timeline ici
	Timeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));

	//On appelle la fonction a chaque tick de la courbe
	TimelineCallback.BindUFunction(this, FName("MoveDoor"));
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	//Si une courbe existe dans l'éditeur, alors on l'attache à la timeline
	if (Curve && Timeline)
	{
		Timeline->AddInterpFloat(Curve, TimelineCallback);
		Timeline->SetPlayRate(OpenSpeed);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor : Curve ou Timeline non définie, l’animation ne sera pas jouée."));
	}

	if (!LeftDoor || !RightDoor)
	{
		UE_LOG(LogTemp, Error, TEXT("ADoor : LeftDoor ou RightDoor est null."));
		return;
	}

	LeftInitialRotation = LeftDoor->GetComponentRotation().Euler();
	RightInitialRotation = RightDoor->GetComponentRotation().Euler();

	UpdateUIText();
}

void ADoor::Interact_Implementation()
{
	//On check si la porte est ouverte si oui alors on ne fait rien
	if (bIsOpen)
		return;
	//Ici on récup le flagManager via le FlagGameMode
	UWorld* World = GetWorld();
	AFlagGameMode* GM = Cast<AFlagGameMode>(World->GetAuthGameMode());
	UFlagManager* FM = GM ? GM->GetFlagManager() : nullptr;


	//On check si la clé est possédé mais pas encore inséré on passe le flag à 0
	if (!bKey0Inserted && FM && FM->IsFlagTrigger("KEY", "KEY_0", 1, true))
	{
		bKey0Inserted = true;
		FM->EditFlag("KEY", "KEY_0", 0);
	}
	else if (!bKey1Inserted && FM && FM->IsFlagTrigger("KEY", "KEY_1", 1, true))
	{
		bKey1Inserted = true;
		FM->EditFlag("KEY", "KEY_1", 0);
	}
	//Si les 2 clés sont insérées on joue la Timeline
	else if (bKey0Inserted && bKey1Inserted)
	{
		bIsOpen = true;
		Timeline->Play();
	}
	//On met à jour l'UI
	UpdateUIText();
}
//En fonction de quel clé est inséré on récupére la position de l'UI cible
FVector ADoor::GetPositionUI_Implementation()
{
	if (bIsOpen || (!bKey0Inserted && !bKey1Inserted))
		return CenterUI->GetComponentLocation();
	else if (!bKey0Inserted)
		return LeftUI->GetComponentLocation();
	else
		return RightUI->GetComponentLocation();
}


FString ADoor::GetUIText_Implementation()
{
	return CurrentUIText;
}

//On apporte une rotation aux 2 porte a chaque tick de la timeline
void ADoor::MoveDoor(float Time)
{
	FRotator LeftRot = FRotator::MakeFromEuler(LeftInitialRotation + FVector(0, 0, -90 * Time));
	FRotator RightRot = FRotator::MakeFromEuler(RightInitialRotation + FVector(0, 0, 90 * Time));

	LeftDoor->SetWorldRotation(LeftRot);
	RightDoor->SetWorldRotation(RightRot);
}


void ADoor::UpdateUIText()
{//On check si la porte est ouverte, il n'y a pas de texte
	if (bIsOpen)
	{
		CurrentUIText = TEXT("");
	}
	// Si on a les 2 clé, on affiche le texte ouvrir
	else if (bKey0Inserted && bKey1Inserted)
	{
		CurrentUIText = TEXT("Ouvrir");
	}
	else
	{
		//On recheck quels sont les flags actifs
		UWorld* World = GetWorld();
		AFlagGameMode* GM = Cast<AFlagGameMode>(World->GetAuthGameMode());
		UFlagManager* FM = GM ? GM->GetFlagManager() : nullptr;

		bool HasKey0 = FM && FM->IsFlagTrigger("KEY", "KEY_0", 1, true);
		bool HasKey1 = FM && FM->IsFlagTrigger("KEY", "KEY_1", 1, true);

		/*if (HasKey0)
			CurrentUIText = TEXT("Insérer la première clé");
		else if (HasKey1)
			CurrentUIText = TEXT("Insérer la deuxième clé");
		else
			CurrentUIText = TEXT("Pas de clé");*/
	}
}
