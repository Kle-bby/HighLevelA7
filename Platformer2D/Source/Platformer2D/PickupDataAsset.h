// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PickupDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UPickupDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// ItemBox settings
	UPROPERTY(EditAnywhere, Category = "ItemBox")
	float ItemBoxAnimationDuration = 0.075f;

	UPROPERTY(EditAnywhere, Category = "ItemBox")
	float ItemBoxCoinImpulseZ = 3500.0f;

	// Pickup settings
	UPROPERTY(EditAnywhere, Category = "Pickup")
	float PickupAnimationDuration = 0.5f;

	// Mushroom settings
	UPROPERTY(EditAnywhere, Category = "Mushroom Pickup")
	float MushroomSpeed = 125.0f;

};
