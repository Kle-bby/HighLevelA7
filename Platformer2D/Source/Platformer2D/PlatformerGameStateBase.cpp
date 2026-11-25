// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerGameStateBase.h"
#include "Platformer2D.h"
#include "GameDataAsset.h"


APlatformerGameStateBase::APlatformerGameStateBase() :
	DataAsset(nullptr),
	TimeRemaining(0.0f),
	IsGameOver(false)
{
}

void APlatformerGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	if (DataAsset != nullptr)
	{
		TimeRemaining = DataAsset->DefaultGameDuration;
	}
	else
	{
		UE_LOG(LogPlatformer2D, Error, TEXT("PlatformerGameState settings were not set: the DataAsset is null"));
	}
}
