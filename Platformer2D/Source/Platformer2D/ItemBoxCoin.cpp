// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBoxCoin.h"
#include "PickupDataAsset.h"
#include "PaperFlipbookComponent.h"
#include "Components/SphereComponent.h"


// Sets default values
AItemBoxCoin::AItemBoxCoin() :
	Root(nullptr),
	FlipbookComponent(nullptr),
	DataAsset(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USphereComponent>("Root");
	Root->SetCollisionProfileName("ItemBoxCoin");
	Root->SetGenerateOverlapEvents(false);
	Root->SetSimulatePhysics(true);
	RootComponent = Root;

	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("PickupFlipbook");
	FlipbookComponent->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AItemBoxCoin::BeginPlay()
{
	Super::BeginPlay();

	Start = GetActorLocation();
	FlipbookComponent->PlayFromStart();

	if (DataAsset != nullptr)
	{
		Root->AddImpulse(FVector(0.0f, 0.0f, DataAsset->ItemBoxCoinImpulseZ));
	}
}

// Called every frame
void AItemBoxCoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetActorLocation().Z < Start.Z)
	{
		Destroy();
	}
}

