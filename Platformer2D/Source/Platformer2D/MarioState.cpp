// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioState.h"
#include "Platformer2D.h"
#include "MarioDataAsset.h"


AMarioState::AMarioState() :
	DataAsset(nullptr)
{
	State = EMarioState::Idle;
	Form = EMarioForm::Super;
	Direction = EMarioDirection::Right;

	RunningMeter = 0;
	Coins = 0;
	Lives = 1;
	InvincibilityTimer = 0.0f;

	IsOnGround = true;
	IsRunning = false;
}

void AMarioState::BeginPlay()
{
	Super::BeginPlay();

	if (DataAsset != nullptr)
	{
		Lives = DataAsset->DefaultStartingLives;
	}
	else
	{
		UE_LOG(LogPlatformer2D, Error, TEXT("MarioState settings were not set: the DataAsset is null"));
	}
}

float AMarioState::DirectionScalar()
{
	return Direction == EMarioDirection::Left ? -1.0f : 1.0f;
}

bool AMarioState::IsInvincible()
{
	return InvincibilityTimer > 0.0f;
}
