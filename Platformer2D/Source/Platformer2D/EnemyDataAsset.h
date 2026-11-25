// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UEnemyDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	// Piranha Plant settings
	UPROPERTY(EditAnywhere, Category = "Piranha Plant")
	float PiranhaPlantOffsetZ = 48.0f;

	UPROPERTY(EditAnywhere, Category = "Piranha Plant")
	float PiranhaPlantAnimationDuration = 0.75f;

	UPROPERTY(EditAnywhere, Category = "Piranha Plant")
	float PiranhaPlantActiveDuration = 2.5f;

	UPROPERTY(EditAnywhere, Category = "Piranha Plant")
	float PiranhaPlantHiddenDurationMin = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Piranha Plant")
	float PiranhaPlantHiddenDurationMax = 4.0f;


	// Goomba constants
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Goomba")
	float GoombaSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Goomba")
	float GoombaSquishedDuration = 0.6f;
};
