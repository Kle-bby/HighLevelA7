// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UGameDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Defaults")
	float TileSize = 32.0f;

	UPROPERTY(EditAnywhere, Category = "Gameplay")
	float DestroyActorAtZ = -250.0f;

	UPROPERTY(EditAnywhere, Category = "Gameplay")
	float DefaultGameDuration = 300.0f;
};
