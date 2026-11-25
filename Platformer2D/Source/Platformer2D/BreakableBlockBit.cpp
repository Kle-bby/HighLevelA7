// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableBlockBit.h"
#include "PlatformerGameModeBase.h"
#include "GameDataAsset.h"
#include "PaperFlipbook.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "Math/UnrealMathUtility.h"


// Sets default values
ABreakableBlockBit::ABreakableBlockBit() :
	Root(nullptr),
	SpriteComponent(nullptr),
	LeftSprite(nullptr),
	RightSprite(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USphereComponent>("Root");
	Root->SetCollisionProfileName("BreakableBlockBit");
	Root->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	Root->SetSimulatePhysics(true);
	Root->BodyInstance.bLockXRotation = true;
	Root->BodyInstance.bLockZRotation = true;
	Root->BodyInstance.bLockYTranslation = true;
	RootComponent = Root;

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("BreakableBlockBitSprite");
	SpriteComponent->SetCollisionProfileName("NoCollision");
	SpriteComponent->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ABreakableBlockBit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABreakableBlockBit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APlatformerGameModeBase* gameMode = GetWorld()->GetAuthGameMode<APlatformerGameModeBase>();
	if (gameMode != nullptr && gameMode->DataAsset != nullptr)
	{
		if (GetActorLocation().Z < gameMode->DataAsset->DestroyActorAtZ)
		{
			Destroy();
		}
	}
}

void ABreakableBlockBit::Spawn(EBreakableBlockBitType type, FVector impulse)
{
	float direction = 0.0f;

	if (type == EBreakableBlockBitType::Left)
	{
		SpriteComponent->SetSprite(LeftSprite);
		direction = -1.0f;
	}
	else if (type == EBreakableBlockBitType::Right)
	{
		SpriteComponent->SetSprite(RightSprite);
		direction = 1.0f;
	}

	Root->AddImpulse(impulse);

	float angularImpulse = kAngularImpulse * PI * 2.0f * direction;
	Root->AddAngularImpulseInRadians(FVector(0.0f, angularImpulse, 0.0f));
}
