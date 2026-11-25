// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MarioCharacter.generated.h"

// Forward declaration
enum class EMarioState : uint8;
enum class EMarioForm : uint8;

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AMarioCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	AMarioCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Asset")
	class UMarioDataAsset* DataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SmallIdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SmallWalkFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SmallRunFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SmallJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SmallRunJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SmallTurnFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperIdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperWalkFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperRunFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperFallingFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperRunJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperTurnFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbooks")
	class UPaperFlipbook* SuperDuckFlipbook;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void Respawn(FVector location);

	void Run();
	void StopRunning();

	void Duck();
	void StopDucking();

	void ApplyStateChange(EMarioState newState);
	void ApplyTransformChange(EMarioForm newForm, bool noAnimation = false);

	void ApplyBounce();

	void HandleDamage(bool forceDead = false);

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void OnOverlapBegan(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void OnJumped_Implementation() override;
	void NotifyJumpApex() override;
	void Landed(const FHitResult& Hit) override;

private:
	void UpdateFlipbook();

	void MarioHasDied(bool spawnDeadMario);

	UPaperFlipbook* GetSmallMarioFlipbook();
	UPaperFlipbook* GetSuperMarioFlipbook();

	void ApplyJumpAndWalkSettingsForWalking();
	void ApplyJumpAndWalkSettingsForRunning();

	void ApplySmallCapsuleSize();
	void ApplySuperCapsuleSize();

	class AMarioState* PlayerState;
	class AMarioCamera* CurrentCamera;
	float RunningSegmentTimer;
	float DamagedTimer;
	bool IsRunningBlocked;

	// Collision constants
	const float kCapsuleRadius = 14.0f;
	const float kCapsuleHalfHeightSmall = 14.0f;
	const float kCapsuleHalfHeightSuper = 25.0f;
	const FVector kCapsuleLocationSmall = FVector(0.0f, 0.0f, -17.0f);
	const FVector kCapsuleLocationSuper = FVector(0.0f, 0.0f, -27.0f);
	const float kTransformLocationOffsetZ = 10.0f;
};
