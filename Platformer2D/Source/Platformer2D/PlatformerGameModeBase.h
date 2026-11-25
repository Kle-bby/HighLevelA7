// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlatformerGameModeBase.generated.h"

enum class EMarioForm : uint8;
enum class EMarioDirection : uint8;

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API APlatformerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	APlatformerGameModeBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Asset")
	class UGameDataAsset* DataAsset;

	UPROPERTY(EditAnywhere, Category = "Templates")
	TSubclassOf<class ADeadMario> DeadMarioTemplate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Templates")
	TSubclassOf<class AMarioTransform> MarioTransformTemplate;

	UPROPERTY(EditAnywhere, Category = "Templates")
	TSubclassOf<class AMarioCamera> CameraTemplate;
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void MarioHasDied(bool spawnDeadMario);

	void SpawnMarioTransform(FVector location, EMarioForm oldForm, EMarioForm newForm, EMarioDirection direction);
	void OnMarioTransformEnded();

private:
	void PauseActors();
	void UnpauseActors();

	void SpawnDeadMario(FVector location);

	UPROPERTY() class AMarioCamera* Camera;
	UPROPERTY() class ADeadMario* DeadMario;
	UPROPERTY() class AMarioTransform* MarioTransform;
	FVector MarioPlayerStartLocation;
};
