// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"


UENUM(BlueprintType)
enum class EPickupType : uint8
{
	Unknown		UMETA(DisplayName = "Unknown"),
	Mushroom	UMETA(DisplayName = "Mushroom"),
	Coin		UMETA(DisplayName = "Coin")
};

UENUM(BlueprintType)
enum class EPickupState : uint8
{
	Unknown		UMETA(DisplayName = "Unknown"),
	Spawning	UMETA(DisplayName = "Spawning"),
	Active		UMETA(DisplayName = "Active")
};


UCLASS()
class PLATFORMER2D_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Asset")
	class UPickupDataAsset* DataAsset;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	EPickupType GetPickupType();

	void Spawn();

protected:
	// Override this method in derived classes, if needed
	virtual void OnPickupActive();

	EPickupType Type;
	EPickupState State;
	FVector Start;
	FVector Target;
	float SpawnTime;
};
