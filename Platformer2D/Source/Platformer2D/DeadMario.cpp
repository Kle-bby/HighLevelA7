// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadMario.h"
#include "MarioDataAsset.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"


// Sets default values
ADeadMario::ADeadMario() :
	DataAsset(nullptr),
	Root(nullptr),
	SpriteComponent(nullptr),
	HoldInPlaceTimer(0.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USphereComponent>("Root");
	Root->SetCollisionProfileName("DeadMario");
	Root->SetSimulatePhysics(true);
	Root->SetEnableGravity(false);
	Root->SetGenerateOverlapEvents(false);
	RootComponent = Root;

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("SpriteComponent");
	SpriteComponent->SetCollisionProfileName("NoCollision");
	SpriteComponent->SetupAttachment(Root);

	// Set the Actor tag
	Tags.Add("DeadMario");
}

// Called when the game starts or when spawned
void ADeadMario::BeginPlay()
{
	Super::BeginPlay();
	
	if (DataAsset != nullptr)
	{
		HoldInPlaceTimer = DataAsset->DeadHoldTime;
	}
}

// Called every frame
void ADeadMario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HoldInPlaceTimer > 0.0f)
	{
		HoldInPlaceTimer -= DeltaTime;

		// Is the hold in place timer completed?
		if (HoldInPlaceTimer <= 0.0f)
		{
			HoldInPlaceTimer = 0.0f;

			// Enable gravity
			Root->SetEnableGravity(true);

			// Safety check the DataAsset and then apply an impulse on the root component
			if (DataAsset != nullptr)
			{
				Root->AddImpulse(FVector(0.0f, 0.0f, DataAsset->DeadImpulseZ));
			}
		}
	}
}

