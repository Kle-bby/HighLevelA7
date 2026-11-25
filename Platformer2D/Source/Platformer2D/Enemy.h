// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"


UENUM(BlueprintType)
enum class EEnemyType : uint8
{
	Unknown			UMETA(DisplayName = "Unknown"),
	PiranhaPlant	UMETA(DisplayName = "PiranhaPlant"),
	Goomba			UMETA(DisplayName = "Goomba")

	// TODO: Add additional enemy types here
};

UCLASS()
class PLATFORMER2D_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Asset")
	class UEnemyDataAsset* DataAsset;

	EEnemyType GetEnemyType();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	EEnemyType Type;
};
