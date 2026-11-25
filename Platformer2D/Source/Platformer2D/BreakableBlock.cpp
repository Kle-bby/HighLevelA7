// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableBlock.h"
#include "BreakableBlockBit.h"
#include "MarioCharacter.h"
#include "MarioState.h"
#include "PickupDataAsset.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"


const FVector ABreakableBlock::kBitOffsets[kNumBits] = { FVector(-8.0f, -6.0f, 8.0f), FVector(-8.0f, -6.0f, -8.0f), FVector(8.0f, -6.0f, 8.0f), FVector(8.0f, -6.0f, -8.0f) };
const FVector ABreakableBlock::kBitImpulses[kNumBits] = { FVector(-150.0f, 0.0f, 350.0f), FVector(-150.0f, 0.0f, 300.0f), FVector(150.0f, 0.0f, 350.0f), FVector(150.0f, 0.0f, 300.0f) };
const EBreakableBlockBitType ABreakableBlock::kBitTypes[kNumBits] = { EBreakableBlockBitType::Left, EBreakableBlockBitType::Left, EBreakableBlockBitType::Right, EBreakableBlockBitType::Right };


// Sets default values
ABreakableBlock::ABreakableBlock() :
	BoxComponent(nullptr),
	FlipbookComponent(nullptr),
	DataAsset(nullptr),
	BreakableBlockBitTemplate(nullptr),
	Start(),
	Target(),
	Original(),
	AnimationTimer(0.0f),
	State(EBreakableBlockState::Unknown)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the BoxComponent and set it as the Root component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BreakableBlockBoxComponent");
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->SetSimulatePhysics(false);
	BoxComponent->OnComponentHit.AddDynamic(this, &ABreakableBlock::OnHit);
	RootComponent = BoxComponent;

	// Create the FlipbookComponent and attach it to the Root component
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("BreakableBlockFlipbook");
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	FlipbookComponent->SetupAttachment(RootComponent);

	// Add "BreakableBlock" to the Actor tags
	Tags.Add("BreakableBlock");
}

// Called when the game starts or when spawned
void ABreakableBlock::BeginPlay()
{
	Super::BeginPlay();
	
	SetState(EBreakableBlockState::Active);
}

// Called every frame
void ABreakableBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DataAsset == nullptr)
	{
		return;
	}

	if (State == EBreakableBlockState::AnimUp)
	{
		AnimationTimer -= DeltaTime;

		float pct = 1.0f - (AnimationTimer / DataAsset->ItemBoxAnimationDuration);
		FVector location = FMath::Lerp(Start, Target, pct);
		SetActorLocation(location);

		if (AnimationTimer <= 0.0f)
		{
			AnimationTimer = 0.0f;
			SetState(EBreakableBlockState::AnimDown);
		}
	}
	else if (State == EBreakableBlockState::AnimDown)
	{
		AnimationTimer -= DeltaTime;

		float pct = 1.0f - (AnimationTimer / DataAsset->ItemBoxAnimationDuration);
		FVector location = FMath::Lerp(Start, Target, pct);
		SetActorLocation(location);

		if (AnimationTimer <= 0.0f)
		{
			AnimationTimer = 0.0f;

			SetState(EBreakableBlockState::Active);
		}
	}
}

void ABreakableBlock::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter") && Hit.Normal.Z >= 0.8f)
	{
		AMarioCharacter* mario = Cast<AMarioCharacter>(OtherActor);
		AMarioState* marioState = Cast<AMarioState>(mario->GetPlayerState());

		if (State == EBreakableBlockState::Active)
		{
			if (marioState->Form == EMarioForm::Small)
			{
				SetState(EBreakableBlockState::AnimUp);
			}
			else
			{
				SetState(EBreakableBlockState::Breaking);

				mario->StopJumping();
			}
		}
	}
}

void ABreakableBlock::SetState(EBreakableBlockState state)
{
	if (DataAsset == nullptr)
	{
		return;
	}

	if (State != state)
	{
		State = state;

		if (State == EBreakableBlockState::Active)
		{
			FlipbookComponent->PlayFromStart();
		}
		else if (State == EBreakableBlockState::AnimUp)
		{
			Original = GetActorLocation();
			Start = Original;
			Target = Start + FVector(0.0f, 0.0f, 8.0f);

			AnimationTimer = DataAsset->ItemBoxAnimationDuration;
		}
		else if (State == EBreakableBlockState::AnimDown)
		{
			Start = Target;
			Target = Original;

			AnimationTimer = DataAsset->ItemBoxAnimationDuration;
		}
		else if (State == EBreakableBlockState::Breaking)
		{
			FVector blockLocation = GetActorLocation();
			FVector bitLocation;
			ABreakableBlockBit* bit = nullptr;

			// Spawn the four BreakableBlockBit actors in the world
			for (int32 i = 0; i < kNumBits; i++)
			{
				bitLocation = blockLocation + kBitOffsets[i];
				bit = GetWorld()->SpawnActor<ABreakableBlockBit>(BreakableBlockBitTemplate, bitLocation, FRotator());
				bit->Spawn(kBitTypes[i], kBitImpulses[i]);
			}

			// Lastly, destroy the BreakableBlock actor
			Destroy();
		}
	}
}