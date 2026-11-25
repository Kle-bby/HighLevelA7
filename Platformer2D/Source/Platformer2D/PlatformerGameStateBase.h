// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PlatformerGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API APlatformerGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	APlatformerGameStateBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Asset")
	class UGameDataAsset* DataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	float TimeRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	bool IsGameOver;

protected:
	virtual void BeginPlay() override;
};
