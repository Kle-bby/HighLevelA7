// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinPickup.h"
#include "PaperFlipbookComponent.h"


ACoinPickup::ACoinPickup()
{
	State = EPickupState::Active;
	Type = EPickupType::Coin;
	Tags.Add("CoinPickup");
}

void ACoinPickup::BeginPlay()
{
	Super::BeginPlay();

	FlipbookComponent->PlayFromStart();
}
