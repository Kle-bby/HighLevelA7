// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioCharacter.h"
#include "MarioState.h"
#include "MarioController.h"
#include "MarioCamera.h"
#include "MarioDataAsset.h"
#include "Platformer2D.h"
#include "PlatformerGameModeBase.h"
#include "GameDataAsset.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


AMarioCharacter::AMarioCharacter() :
	DataAsset(nullptr),
	SmallIdleFlipbook(nullptr),
	SmallWalkFlipbook(nullptr),
	SmallRunFlipbook(nullptr),
	SmallJumpFlipbook(nullptr),
	SmallRunJumpFlipbook(nullptr),
	SmallTurnFlipbook(nullptr),
	PlayerState(nullptr),
	CurrentCamera(nullptr),
	RunningSegmentTimer(0.0f),
	DamagedTimer(0.0f),
	IsRunningBlocked(false)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Collision settings
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &AMarioCharacter::OnHit);
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AMarioCharacter::OnOverlapBegan);
	GetCapsuleComponent()->SetCapsuleRadius(kCapsuleRadius);
	GetCapsuleComponent()->SetCapsuleHalfHeight(kCapsuleHalfHeightSmall);

	// Ground settings
	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, 1.0f, 0.0f));

	// Set the Actor tag
	Tags.Add("MarioCharacter");
}

// Called when the game starts or when spawned
void AMarioCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Safety check the DataAsset pointer
	if (DataAsset != nullptr)
	{
		// Ground settings
		GetCharacterMovement()->MaxStepHeight = DataAsset->MaxStepHeight;

		// Jumping settings
		GetCharacterMovement()->GravityScale = DataAsset->GravityScale;
		GetCharacterMovement()->AirControl = DataAsset->AirControl;
		GetCharacterMovement()->JumpZVelocity = DataAsset->JumpZVelocity;

		// Walking settings
		GetCharacterMovement()->GroundFriction = DataAsset->GroundFriction;
		GetCharacterMovement()->MaxAcceleration = DataAsset->MaxAcceleration;
		GetCharacterMovement()->MinAnalogWalkSpeed = DataAsset->MinWalkSpeed;
	}
	else
	{
		UE_LOG(LogPlatformer2D, Error, TEXT("Movement settings were not set: the DataAsset is null"));
	}

	// Set the Jump max time and the character's max walk speed to the walking default
	ApplyJumpAndWalkSettingsForWalking();

	// Ensure the capsule size is super
	ApplySuperCapsuleSize();
	UpdateFlipbook();

	// Get and cast the MarioPlayerState and assign it to the member variable
	PlayerState = GetPlayerState<AMarioState>();
}

// Called every frame
void AMarioCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update the Flipbook
	UpdateFlipbook();

	// Safety check the PlayerState
	if (PlayerState != nullptr && DataAsset != nullptr)
	{
		// Ensure that the player isn't Dead
		if (PlayerState->State != EMarioState::Dead)
		{
			// If Mario falls of the edge, he is no longer on the ground, the movement component 
			// catches this situation, update the IsOnGround value
			if (GetMovementComponent()->IsFalling() && PlayerState->IsOnGround)
			{
				PlayerState->IsOnGround = false;
			}

			// Handle the situation where Mario is Invincible, this 
			// occurs right after Mario takes damage
			if (PlayerState->IsInvincible())
			{
				PlayerState->InvincibilityTimer -= DeltaTime;

				if (PlayerState->InvincibilityTimer <= 0.0f)
				{
					PlayerState->InvincibilityTimer = 0.0f;

					GetCapsuleComponent()->SetCollisionProfileName("Pawn");
					GetSprite()->SetVisibility(true);
				}
				else
				{
					DamagedTimer -= DeltaTime;
					if (DamagedTimer <= 0.0f)
					{
						DamagedTimer = DataAsset->InvincibleVisibilityDuration;
						GetSprite()->ToggleVisibility();
					}
				}
			}

			// Handle the situation where Mario is Running 
			if (PlayerState->IsRunning && IsRunningBlocked == false)
			{
				if (GetMovementComponent()->GetLastInputVector().X != 0.0f && PlayerState->IsOnGround)
				{
					// Increment the segment timer
					RunningSegmentTimer += DeltaTime;

					// Is the segment timer greater than the duration constant?
					if (RunningSegmentTimer > DataAsset->RunSegmentIncrementDuration)
					{
						// Reset the segment timer and increment the running meter
						RunningSegmentTimer = 0.0f;
						PlayerState->RunningMeter++;

						// Cap the running meter to the max constant and update the flipbook so that Mario's arms are out
						if (PlayerState->RunningMeter >= DataAsset->MaxRunningMeter)
						{
							PlayerState->RunningMeter = DataAsset->MaxRunningMeter;
							UpdateFlipbook();
						}

						// Update the jump and walk speed settings for running
						ApplyJumpAndWalkSettingsForRunning();
					}
				}
			}
			else
			{
				// If there's still some running meter built up, but the player is 
				// not running, gradually decrease the running meter
				if (PlayerState->RunningMeter > 0)
				{
					// Increment the segment timer
					RunningSegmentTimer += DeltaTime;

					// Is the segment timer greater than the duration constant?
					if (RunningSegmentTimer > DataAsset->RunSegmentDecrementDuration)
					{
						// Reset the segment timer and decrement the running meter
						RunningSegmentTimer = 0.0f;
						PlayerState->RunningMeter--;

						// Ensure the running meter doesn't go lower than zero
						if (PlayerState->RunningMeter <= 0)
						{
							PlayerState->RunningMeter = 0;

							// Reset the Jump max time and the character's max walk speed to the walking default
							ApplyJumpAndWalkSettingsForWalking();
						}
					}
					else
					{
						// There is still run meter left, update the jump and walk speed settings for running
						ApplyJumpAndWalkSettingsForRunning();
					}
				}
			}

			// Reset the running blocked flag to false
			IsRunningBlocked = false;

			// Mario has fallen off the edge of the level and has died
			APlatformerGameModeBase* gameMode = GetWorld()->GetAuthGameMode<APlatformerGameModeBase>();
			if (gameMode != nullptr && gameMode->DataAsset != nullptr)
			{
				if (GetActorLocation().Z < gameMode->DataAsset->DestroyActorAtZ)
				{
					MarioHasDied(false);
				}
			}

			GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Yellow, FString::Printf(TEXT("Running meter: %i"), PlayerState->RunningMeter));
		}
	}

}

void AMarioCharacter::Respawn(FVector location)
{
	Restart();

	SetActorHiddenInGame(false);
	SetActorLocation(location);
	ResetJumpState();

	IsRunningBlocked = false;

	if (PlayerState->State == EMarioState::Dead)
	{
		ApplyTransformChange(EMarioForm::Small, true);

		AMarioController* marioController = Cast<AMarioController>(Controller);
		if (marioController != nullptr)
		{
			marioController->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));

			PlayerState->Direction = EMarioDirection::Right;
		}
	}

	// Set the state back to Idle
	ApplyStateChange(EMarioState::Idle);

	GetCharacterMovement()->ClearAccumulatedForces();
}

void AMarioCharacter::Run()
{
	if (PlayerState != nullptr)
	{
		PlayerState->IsRunning = true;
	}

	// Reset the the Running segment timer to zero, this 
	// timer determines when to increase the running meter
	RunningSegmentTimer = 0.0f;

	// Set the jump max time to the running constant
	if (DataAsset != nullptr)
	{
		JumpMaxHoldTime = DataAsset->JumpMaxHoldTimeRunning;
	}
	else
	{
		UE_LOG(LogPlatformer2D, Error, TEXT("JumpMaxHoldTime not set: the DataAsset is null"));
	}
}

void AMarioCharacter::StopRunning()
{
	// Set the PlayerState's IsRunning flag to false
	if (PlayerState != nullptr)
	{
		PlayerState->IsRunning = false;
	}

	// Reset the the Running segment timer to zero
	RunningSegmentTimer = 0.0f;
}

void AMarioCharacter::Duck()
{
	ApplyStateChange(EMarioState::Ducking);
}

void AMarioCharacter::StopDucking()
{
	AMarioController* marioController = Cast<AMarioController>(Controller);
	if (marioController != nullptr)
	{
		if (marioController->GetMoveValue() == 0.0f)
		{
			ApplyStateChange(EMarioState::Idle);
		}
		else
		{
			ApplyStateChange(EMarioState::Walking);
		}
	}
}

void AMarioCharacter::ApplyStateChange(EMarioState newState)
{
	if (PlayerState == nullptr)
	{
		return;
	}

	// Ensure the new mario state is different than the current state
	if (PlayerState->State == newState)
	{
		return;
	}

	// Assign the new state
	EMarioState oldState = PlayerState->State;
	PlayerState->State = newState;

	if (newState == EMarioState::Jumping)
	{
		GetCharacterMovement()->bNotifyApex = true;
	}

	// Handle the duck resize
	if (PlayerState->Form == EMarioForm::Super)
	{
		if (newState == EMarioState::Ducking)
		{
			ApplySmallCapsuleSize();
		}
		else if (oldState == EMarioState::Ducking)
		{
			ApplySuperCapsuleSize();
		}
	}

	// Lastly, update the flipbook sprites
	UpdateFlipbook();
}

void AMarioCharacter::ApplyTransformChange(EMarioForm newForm, bool noAnimation)
{
	if (PlayerState == nullptr)
	{
		return;
	}

	// Ensure the new mario form is different than the current form
	if (PlayerState->Form == newForm)
	{
		return;
	}

	// Assign the new form and then set the IsTransforming flag to true
	EMarioForm oldForm = PlayerState->Form;
	PlayerState->Form = newForm;

	// Update the capsule half height, based on the current form
	if (oldForm == EMarioForm::Small && newForm == EMarioForm::Super)
	{
		ApplySuperCapsuleSize();
	}
	else if (oldForm == EMarioForm::Super && newForm == EMarioForm::Small)
	{
		ApplySmallCapsuleSize();
	}

	if (noAnimation == false)
	{
		// Get the PlatformerGameModeBase and spawn the MarioTransform
		APlatformerGameModeBase* gameMode = GetWorld()->GetAuthGameMode<APlatformerGameModeBase>();
		if (gameMode != nullptr)
		{
			gameMode->SpawnMarioTransform(GetSprite()->GetComponentLocation(), oldForm, newForm, PlayerState->Direction);
		}
	}

	// Lastly, update the flipbook sprites
	UpdateFlipbook();
}

void AMarioCharacter::ApplyBounce()
{
	if (DataAsset != nullptr)
	{
		LaunchCharacter(FVector(0.0f, 0.0f, DataAsset->BounceImpulseZ), false, true);
		GetPlayerState<AMarioState>()->IsOnGround = false;
	}
}

void AMarioCharacter::HandleDamage(bool forceDead)
{
	if (PlayerState == nullptr || DataAsset == nullptr)
	{
		return;
	}

	if (PlayerState->IsInvincible() == false || forceDead)
	{
		if (PlayerState->Form == EMarioForm::Small || forceDead)
		{
			MarioHasDied(true);
		}
		else
		{
			DamagedTimer = DataAsset->InvincibleVisibilityDuration;
			PlayerState->InvincibilityTimer = DataAsset->InvincibleTime;
			GetCapsuleComponent()->SetCollisionProfileName("MarioInvincible");

			if (PlayerState->Form == EMarioForm::Super)
			{
				ApplyTransformChange(EMarioForm::Small);
			}
			else
			{
				ApplyTransformChange(EMarioForm::Super);
			}
		}
	}
}

void AMarioCharacter::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("World"))
	{
		// Check if Mario collided with the World along the x-axis
		if (Hit.Normal.X <= -0.8f || Hit.Normal.X >= 0.8f)
		{
			IsRunningBlocked = true;
		}
	}
}

void AMarioCharacter::OnOverlapBegan(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Enemy"))
	{
		if (OtherActor->ActorHasTag("PiranhaPlant"))
		{
			HandleDamage();
		}
	}
	else if (OtherActor->ActorHasTag("Pickup"))
	{
		if (OtherActor->ActorHasTag("MushroomPickup"))
		{
			if (PlayerState != nullptr && PlayerState->Form == EMarioForm::Small)
			{
				ApplyTransformChange(EMarioForm::Super);
			}
		}
		else if (OtherActor->ActorHasTag("CoinPickup"))
		{
			if (PlayerState != nullptr)
			{
				PlayerState->Coins++;
			}
		}

		// Destroy the pickup
		OtherActor->Destroy();
	}
}

void AMarioCharacter::OnJumped_Implementation()
{
	Super::OnJumped_Implementation();

	if (PlayerState != nullptr)
	{
		PlayerState->IsOnGround = false;
	}

	ApplyStateChange(EMarioState::Jumping);
}

void AMarioCharacter::NotifyJumpApex()
{
	Super::NotifyJumpApex();

	if (PlayerState != nullptr && PlayerState->IsOnGround == false)
	{
		ApplyStateChange(EMarioState::Falling);
	}
}

void AMarioCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	if (PlayerState != nullptr)
	{
		PlayerState->IsOnGround = true;

		AMarioController* marioController = Cast<AMarioController>(Controller);
		if (marioController != nullptr)
		{
			if (marioController->IsDuckPressed())
			{
				ApplyStateChange(EMarioState::Ducking);
			}
			else
			{
				if (marioController->GetMoveValue() == 0.0f)
				{
					ApplyStateChange(EMarioState::Idle);
				}
				else
				{
					ApplyStateChange(EMarioState::Walking);
				}
			}
		}
	}
}

void AMarioCharacter::MarioHasDied(bool spawnDeadMario)
{
	if (PlayerState->State != EMarioState::Dead)
	{
		ApplyStateChange(EMarioState::Dead);

		SetActorHiddenInGame(true);

		APlatformerGameModeBase* gameMode = GetWorld()->GetAuthGameMode<APlatformerGameModeBase>();
		if (gameMode != nullptr)
		{
			gameMode->MarioHasDied(spawnDeadMario);
		}
	}
}

void AMarioCharacter::UpdateFlipbook()
{
	if (PlayerState == nullptr)
	{
		return;
	}

	UPaperFlipbook* currentFlipbook = GetSprite()->GetFlipbook();
	UPaperFlipbook* newFlipbook = nullptr;

	// Get the flipbook based on Mario's Form and State
	if (PlayerState->Form == EMarioForm::Small)
	{
		newFlipbook = GetSmallMarioFlipbook();
	}
	else if (PlayerState->Form == EMarioForm::Super)
	{
		newFlipbook = GetSuperMarioFlipbook();
	}

	// Safety check that the new flipbook is not null and different than the current flipbook
	if (currentFlipbook != newFlipbook && newFlipbook != nullptr)
	{
		GetSprite()->SetFlipbook(newFlipbook);
		GetSprite()->PlayFromStart();

		if (PlayerState->IsRunning)
		{
			float playRate = 1.0f + PlayerState->RunningMeter * 0.2f;
			GetSprite()->SetPlayRate(playRate);
		}
		else
		{
			GetSprite()->SetPlayRate(1.0f);
		}
	}
}

UPaperFlipbook* AMarioCharacter::GetSmallMarioFlipbook()
{
	if (PlayerState == nullptr || DataAsset == nullptr)
	{
		return nullptr;
	}

	UPaperFlipbook* flipbook = nullptr;

	if (PlayerState->State == EMarioState::Idle)
	{
		flipbook = SmallIdleFlipbook;
	}
	else if (PlayerState->State == EMarioState::Walking)
	{
		const FVector PlayerVelocity = GetVelocity();
		const FVector PlayerAcceleration = GetCharacterMovement()->GetCurrentAcceleration();

		if (PlayerVelocity.X * PlayerAcceleration.X >= 0)
		{
			if (PlayerState->IsRunning && PlayerState->RunningMeter == DataAsset->MaxRunningMeter)
			{
				flipbook = SmallRunFlipbook;
			}
			else
			{
				flipbook = SmallWalkFlipbook;
			}
		}
		else
		{
			flipbook = SmallTurnFlipbook;
		}
	}
	else if (PlayerState->State == EMarioState::Jumping || PlayerState->State == EMarioState::Falling)
	{
		if (PlayerState->IsRunning && PlayerState->RunningMeter == DataAsset->MaxRunningMeter)
		{
			flipbook = SmallRunJumpFlipbook;
		}
		else
		{
			flipbook = SmallJumpFlipbook;
		}
	}
	else if (PlayerState->State == EMarioState::Ducking)
	{
		flipbook = SmallIdleFlipbook;
	}

	return flipbook;
}

UPaperFlipbook* AMarioCharacter::GetSuperMarioFlipbook()
{
	if (PlayerState == nullptr || DataAsset == nullptr)
	{
		return nullptr;
	}

	UPaperFlipbook* flipbook = nullptr;

	if (PlayerState->State == EMarioState::Idle)
	{
		flipbook = SuperIdleFlipbook;
	}
	else if (PlayerState->State == EMarioState::Walking)
	{
		const FVector PlayerVelocity = GetVelocity();
		const FVector PlayerAcceleration = GetCharacterMovement()->GetCurrentAcceleration();

		if (PlayerVelocity.X * PlayerAcceleration.X >= 0)
		{
			if (PlayerState->IsRunning && PlayerState->RunningMeter == DataAsset->MaxRunningMeter)
			{
				flipbook = SuperRunFlipbook;
			}
			else
			{
				flipbook = SuperWalkFlipbook;
			}
		}
		else
		{
			flipbook = SuperTurnFlipbook;
		}
	}
	else if (PlayerState->State == EMarioState::Jumping)
	{
		if (PlayerState->IsRunning && PlayerState->RunningMeter == DataAsset->MaxRunningMeter)
		{
			flipbook = SuperRunJumpFlipbook;
		}
		else
		{
			flipbook = SuperJumpFlipbook;
		}
	}
	else if (PlayerState->State == EMarioState::Falling)
	{
		if (PlayerState->IsRunning && PlayerState->RunningMeter == DataAsset->MaxRunningMeter)
		{
			flipbook = SuperRunJumpFlipbook;
		}
		else
		{
			flipbook = SuperFallingFlipbook;
		}
	}
	else if (PlayerState->State == EMarioState::Ducking)
	{
		flipbook = SuperDuckFlipbook;
	}

	return flipbook;
}

void AMarioCharacter::ApplyJumpAndWalkSettingsForWalking()
{
	if (DataAsset != nullptr)
	{
		JumpMaxHoldTime = DataAsset->JumpMaxHoldTimeWalking;
		GetCharacterMovement()->MaxWalkSpeed = DataAsset->MaxWalkSpeed;
	}
	else
	{
		UE_LOG(LogPlatformer2D, Error, TEXT("JumpMaxHoldTime and MaxWalkSpeed not set: the DataAsset is null"));
	}

	// Reset the flipbook's playback rate to 1.0f
	GetSprite()->SetPlayRate(1.0f);
}

void AMarioCharacter::ApplyJumpAndWalkSettingsForRunning()
{
	if (DataAsset != nullptr)
	{
		// Set the jump max time to factor in the running meter, running faster means Mario jumps higher and thus farther
		JumpMaxHoldTime = DataAsset->JumpMaxHoldTimeRunning + DataAsset->JumpIncreasePerSegment * (float)PlayerState->RunningMeter;

		// Set character movement's max walk speed to factor in the running meter
		GetCharacterMovement()->MaxWalkSpeed = DataAsset->MaxWalkSpeed + (PlayerState->RunningMeter * DataAsset->RunSpeedPerSegment);
	}
	else
	{
		UE_LOG(LogPlatformer2D, Error, TEXT("JumpMaxHoldTime and MaxWalkSpeed not set: the DataAsset is null"));
	}

	// Set the flipbook's playback rate based on the running meter
	if (PlayerState != nullptr)
	{
		float playRate = 1.0f + PlayerState->RunningMeter * 0.75f;
		GetSprite()->SetPlayRate(playRate);
	}
}

void AMarioCharacter::ApplySmallCapsuleSize()
{
	GetCapsuleComponent()->SetCapsuleHalfHeight(kCapsuleHalfHeightSmall);
	GetSprite()->SetRelativeLocation(kCapsuleLocationSmall);

	FVector location = GetActorLocation();
	location.Z -= kTransformLocationOffsetZ;
	SetActorLocation(location);
}

void AMarioCharacter::ApplySuperCapsuleSize()
{
	GetCapsuleComponent()->SetCapsuleHalfHeight(kCapsuleHalfHeightSuper);
	GetSprite()->SetRelativeLocation(kCapsuleLocationSuper);

	FVector location = GetActorLocation();
	location.Z += kTransformLocationOffsetZ;
	SetActorLocation(location);
}