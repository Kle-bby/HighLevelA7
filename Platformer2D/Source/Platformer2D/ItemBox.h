// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBox.generated.h"


UENUM(BlueprintType)
enum class EItemBoxState : uint8
{
	Unknown		UMETA(DisplayName = "Unknown"),
	Active		UMETA(DisplayName = "Active"),
	AnimUp		UMETA(DisplayName = "AnimUp"),
	AnimDown	UMETA(DisplayName = "AnimDown"),
	Spawning	UMETA(DisplayName = "Spawning"),
	Inactive	UMETA(DisplayName = "Inactive")
};

UENUM(BlueprintType)
enum class EItemBoxContents : uint8
{
	Mushroom	UMETA(DisplayName = "Mushroom"),
	Coin1		UMETA(DisplayName = "Coin1"),
	Coin5		UMETA(DisplayName = "Coin5"),
	Coin10		UMETA(DisplayName = "Coin10")
};


UCLASS()
class PLATFORMER2D_API AItemBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBox();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Asset")
	class UPickupDataAsset* DataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* ActiveFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* InactiveFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Contents")
	EItemBoxContents Contents;

	UPROPERTY(EditAnyWhere, Category = "Templates")
	TSubclassOf<class AMushroomPickup> MushroomPickupTemplate;

	UPROPERTY(EditAnyWhere, Category = "Templates")
	TSubclassOf<class AItemBoxCoin> ItemBoxCoinTemplate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool IsEmpty();

	bool IsCoinItemBox();
	int16 CoinsLeft();

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	void SpawnItemBoxCoin();
	void SpawnPickup();
	void SetState(EItemBoxState state);

	FVector Start;
	FVector Target;
	FVector Original;
	float AnimationTimer;
	int16 CoinCount;
	EItemBoxState State;

};
