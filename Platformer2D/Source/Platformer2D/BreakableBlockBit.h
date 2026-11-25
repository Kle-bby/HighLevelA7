// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BreakableBlockBit.generated.h"


UENUM(BlueprintType)
enum class EBreakableBlockBitType : uint8
{
	Unknown			UMETA(DisplayName = "Unknown"),
	Left			UMETA(DisplayName = "Left"),
	Right			UMETA(DisplayName = "Right")
};

UCLASS()
class PLATFORMER2D_API ABreakableBlockBit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableBlockBit();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperSpriteComponent* SpriteComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
	class UPaperSprite* LeftSprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
	class UPaperSprite* RightSprite;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Spawn(EBreakableBlockBitType type, FVector impulse);

private:
	const float kAngularImpulse = 42.0f;
};
