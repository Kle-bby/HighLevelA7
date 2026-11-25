// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBox.h"
#include "ItemBoxCoin.h"
#include "MarioCharacter.h"
#include "MarioState.h"
#include "MarioController.h"
#include "MushroomPickup.h"
#include "PickupDataAsset.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"


// Sets default values
AItemBox::AItemBox() :
	BoxComponent(nullptr),
	FlipbookComponent(nullptr),
	DataAsset(nullptr),
	ActiveFlipbook(nullptr),
	InactiveFlipbook(nullptr),
	MushroomPickupTemplate(nullptr),
	Start(),
	Target(),
	Original(),
	AnimationTimer(0.0f),
	CoinCount(0),
	State(EItemBoxState::Unknown)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the BoxComponent and set it as the Root component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->SetSimulatePhysics(false);
	BoxComponent->OnComponentHit.AddDynamic(this, &AItemBox::OnHit);
	RootComponent = BoxComponent;

	// Create the FlipbookComponent and attach it to the Root component
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("FlipbookComponent");
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	FlipbookComponent->SetupAttachment(RootComponent);

	// Add "ItemBox" to the Actor tags
	Tags.Add("ItemBox");
}

// Called when the game starts or when spawned
void AItemBox::BeginPlay()
{
	Super::BeginPlay();
	
	SetState(EItemBoxState::Active);
}

// Called every frame
void AItemBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DataAsset == nullptr)
	{
		return;
	}

	if (State == EItemBoxState::AnimUp)
	{
		AnimationTimer -= DeltaTime;

		float pct = 1.0f - (AnimationTimer / DataAsset->ItemBoxAnimationDuration);
		FVector location = FMath::Lerp(Start, Target, pct);
		SetActorLocation(location);

		if (AnimationTimer <= 0.0f)
		{
			AnimationTimer = 0.0f;
			SetState(EItemBoxState::AnimDown);
		}
	}
	else if (State == EItemBoxState::AnimDown)
	{
		AnimationTimer -= DeltaTime;

		float pct = 1.0f - (AnimationTimer / DataAsset->ItemBoxAnimationDuration);
		FVector location = FMath::Lerp(Start, Target, pct);
		SetActorLocation(location);

		if (AnimationTimer <= 0.0f)
		{
			AnimationTimer = 0.0f;

			if (IsCoinItemBox())
			{
				if (CoinsLeft() > 0)
				{
					SetState(EItemBoxState::Active);
				}
				else
				{
					SetState(EItemBoxState::Inactive);
				}
			}
			else
			{
				SetState(EItemBoxState::Spawning);
			}
		}
	}
	else if (State == EItemBoxState::Spawning)
	{
		SetState(EItemBoxState::Inactive);
	}
}

bool AItemBox::IsEmpty()
{
	if (Contents == EItemBoxContents::Coin1)
	{
		return CoinCount >= 1;
	}
	else if (Contents == EItemBoxContents::Coin5)
	{
		return CoinCount >= 5;
	}
	else if (Contents == EItemBoxContents::Coin10)
	{
		return CoinCount >= 10;
	}

	return State != EItemBoxState::Active;
}

bool AItemBox::IsCoinItemBox()
{
	return Contents == EItemBoxContents::Coin1 || Contents == EItemBoxContents::Coin5 || Contents == EItemBoxContents::Coin10;
}

int16 AItemBox::CoinsLeft()
{
	if (Contents == EItemBoxContents::Coin1)
	{
		return 1 - CoinCount;
	}
	else if (Contents == EItemBoxContents::Coin5)
	{
		return 5 - CoinCount;
	}
	else if (Contents == EItemBoxContents::Coin10)
	{
		return 10 - CoinCount;
	}

	return 0;
}

void AItemBox::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter") && Hit.Normal.Z >= 0.8f)
	{
		if (State == EItemBoxState::Active)
		{
			SetState(EItemBoxState::AnimUp);
		}
	}
}

void AItemBox::SpawnItemBoxCoin()
{
	FVector location = GetActorLocation();
	location.Y = -1.0f;

	GetWorld()->SpawnActor<AItemBoxCoin>(ItemBoxCoinTemplate, location, FRotator());

	CoinCount++;

	AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();
	AMarioState* playerState = Cast<AMarioState>(mario->GetPlayerState());
	if (playerState != nullptr)
	{
		playerState->Coins++;
	}
}

void AItemBox::SpawnPickup()
{
	FVector location = GetActorLocation();
	location.Y = -1.0f;

	if (Contents == EItemBoxContents::Mushroom)
	{
		AMushroomPickup* mushroomPickup = GetWorld()->SpawnActor<AMushroomPickup>(MushroomPickupTemplate, location, FRotator());
		mushroomPickup->Spawn();
	}
}

void AItemBox::SetState(EItemBoxState state)
{
	if (DataAsset == nullptr)
	{
		return;
	}

	if (State != state)
	{
		State = state;

		if (State == EItemBoxState::Active)
		{
			FlipbookComponent->SetFlipbook(ActiveFlipbook);
			FlipbookComponent->PlayFromStart();
		}
		else if (State == EItemBoxState::AnimUp)
		{
			if (IsCoinItemBox() == false || (IsCoinItemBox() && CoinsLeft() <= 1))
			{
				FlipbookComponent->SetFlipbook(InactiveFlipbook);
			}

			Original = GetActorLocation();
			Start = Original;
			Target = Start + FVector(0.0f, 0.0f, 8.0f);

			AnimationTimer = DataAsset->ItemBoxAnimationDuration;
		}
		else if (State == EItemBoxState::AnimDown)
		{
			if (IsCoinItemBox() && CoinsLeft() > 0)
			{
				SpawnItemBoxCoin();
			}

			Start = Target;
			Target = Original;

			AnimationTimer = DataAsset->ItemBoxAnimationDuration;
		}
		else if (State == EItemBoxState::Spawning)
		{
			SetActorLocation(Original);
		}
		else if (State == EItemBoxState::Inactive)
		{
			if (IsCoinItemBox() == false)
			{
				SpawnPickup();
			}
		}
	}
}
