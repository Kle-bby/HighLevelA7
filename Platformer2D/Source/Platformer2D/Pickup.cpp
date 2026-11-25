// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "PickupDataAsset.h"
#include "PlatformerGameModeBase.h"
#include "GameDataAsset.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"


// Sets default values
APickup::APickup() :
	BoxComponent(nullptr),
	FlipbookComponent(nullptr),
	Type(EPickupType::Unknown),
	State(EPickupState::Unknown),
	Start(),
	Target(),
	SpawnTime(0.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the Sphere component and set it as the root component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("PickupBoxComponent");
	BoxComponent->SetCollisionProfileName("OverlapAll");
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->BodyInstance.bLockXRotation = true;
	BoxComponent->BodyInstance.bLockYRotation = true;
	BoxComponent->BodyInstance.bLockZRotation = true;
	BoxComponent->BodyInstance.bLockYTranslation = true;
	RootComponent = BoxComponent;

	// Create the Flipbook component and attach it to the root component
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("PickupFlipbookComponent");
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	FlipbookComponent->SetupAttachment(RootComponent);

	// Add "Pickup" to the Actor tags
	Tags.Add("Pickup");
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DataAsset != nullptr)
	{
		if (State == EPickupState::Spawning)
		{
			if (SpawnTime > 0.0f)
			{
				SpawnTime -= DeltaTime;

				float pct = 1.0f - (SpawnTime / DataAsset->PickupAnimationDuration);
				FVector location = FMath::Lerp(Start, Target, pct);
				SetActorLocation(location);

				if (SpawnTime <= 0.0f)
				{
					SpawnTime = 0.0f;
					SetActorLocation(Target);
					State = EPickupState::Active;
					OnPickupActive();
				}
			}
		}
	}
}

EPickupType APickup::GetPickupType()
{
	return Type;
}

void APickup::Spawn()
{
	if (DataAsset != nullptr)
	{
		State = EPickupState::Spawning;
		SpawnTime = DataAsset->PickupAnimationDuration;
		Start = GetActorLocation();
		Target = Start;

		// Get the PlatformerGameModeBase's DataAsset to factor in the TileSize
		APlatformerGameModeBase* gameMode = GetWorld()->GetAuthGameMode<APlatformerGameModeBase>();
		if (gameMode != nullptr && gameMode->DataAsset != nullptr)
		{
			Target.Z += gameMode->DataAsset->TileSize;
		}
	}
}

void APickup::OnPickupActive()
{
	// Override this method in derived classes, if needed
}

