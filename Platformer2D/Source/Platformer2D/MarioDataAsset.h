// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MarioDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UMarioDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	// General constants
	UPROPERTY(EditAnywhere, Category = "Defaults")
	int MaxRunningMeter = 7;

	UPROPERTY(EditAnywhere, Category = "Defaults")
	int DefaultStartingLives = 4;


	// Invincibility constants
	UPROPERTY(EditAnywhere, Category = "Invincibility")
	float InvincibleTime = 1.5f;

	UPROPERTY(EditAnywhere, Category = "Invincibility")
	float InvincibleVisibilityDuration = 0.05f;


	// Dead constants
	UPROPERTY(EditAnywhere, Category = "Dead")
	float DeadHoldTime = 1.5f;

	UPROPERTY(EditAnywhere, Category = "Dead")
	float DeadImpulseZ = 4250.0f;


	// Bounce constants
	UPROPERTY(EditAnywhere, Category = "Bounce")
	float BounceImpulseZ = 600.0f;


	// Jump constants
	UPROPERTY(EditAnywhere, Category = "Jump")
	float GravityScale = 3.75f;

	UPROPERTY(EditAnywhere, Category = "Jump")
	float AirControl = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Jump")
	float JumpZVelocity = 750.0f;

	UPROPERTY(EditAnywhere, Category = "Jump")
	float JumpMaxHoldTimeWalking = 0.15f;

	UPROPERTY(EditAnywhere, Category = "Jump")
	float JumpMaxHoldTimeRunning = 0.19f;

	UPROPERTY(EditAnywhere, Category = "Jump")
	float JumpIncreasePerSegment = 0.0025f;


	// Walking / Running
	UPROPERTY(EditAnywhere, Category = "Walk")
	float GroundFriction = 3.5f;

	UPROPERTY(EditAnywhere, Category = "Walk")
	float MinWalkSpeed = 300.0f;

	UPROPERTY(EditAnywhere, Category = "Walk")
	float MaxWalkSpeed = 400.0f;

	UPROPERTY(EditAnywhere, Category = "Walk")
	float MaxAcceleration = 900.0f;

	UPROPERTY(EditAnywhere, Category = "Walk")
	float MaxStepHeight = 10.0f;

	UPROPERTY(EditAnywhere, Category = "Run")
	float RunSpeedPerSegment = 35.0f;

	UPROPERTY(EditAnywhere, Category = "Run")
	float RunSegmentIncrementDuration = 0.2f;

	UPROPERTY(EditAnywhere, Category = "Run")
	float RunSegmentDecrementDuration = 0.05f;
};