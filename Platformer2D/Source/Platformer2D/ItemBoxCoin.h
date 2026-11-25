// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBoxCoin.generated.h"

UCLASS()
class PLATFORMER2D_API AItemBoxCoin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBoxCoin();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Asset")
	class UPickupDataAsset* DataAsset;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector Start;
};
