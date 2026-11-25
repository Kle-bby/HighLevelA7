// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerGameModeBase.h"
#include "PlatformerGameStateBase.h"
#include "MarioCamera.h"
#include "GameDataAsset.h"
#include "DeadMario.h"
#include "MarioCharacter.h"
#include "MarioState.h"
#include "MarioTransform.h"
#include "GameFramework/PlayerStart.h"
#include "PaperFlipbookComponent.h"
#include "EngineUtils.h"


APlatformerGameModeBase::APlatformerGameModeBase() :
	DataAsset(nullptr),
	DeadMarioTemplate(nullptr),
	MarioTransformTemplate(nullptr),
	CameraTemplate(nullptr),
	Camera(nullptr),
	DeadMario(nullptr),
	MarioTransform(nullptr),
	MarioPlayerStartLocation()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlatformerGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	Camera = GetWorld()->SpawnActor<AMarioCamera>(CameraTemplate, FVector(), FRotator(), SpawnParams);

	// Get the PlayerStart Actor and get it's position
	for (TActorIterator<APlayerStart> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		MarioPlayerStartLocation = (*ActorItr)->GetActorLocation();
		break;
	}
}

void APlatformerGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DeadMario != nullptr && DataAsset != nullptr)
	{
		if (DeadMario->GetActorLocation().Z < DataAsset->DestroyActorAtZ)
		{
			DeadMario->Destroy();
			DeadMario = nullptr;

			UnpauseActors();

			AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();
			if (mario != nullptr)
			{
				mario->Respawn(MarioPlayerStartLocation);
			}
		}
	}

	// Handle the game timer's countdown
	APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
	if (gameState != nullptr)
	{
		gameState->TimeRemaining -= DeltaTime;

		if (gameState->TimeRemaining < 0.0f)
		{
			gameState->TimeRemaining = 0.0f;

			AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();
			if (mario != nullptr)
			{
				mario->HandleDamage(true);
			}
		}
	}
}

void APlatformerGameModeBase::MarioHasDied(bool spawnDeadMario)
{
	// Get Mario's player state and decrease the Lives value by one
	AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();
	if (mario != nullptr)
	{
		AMarioState* marioState = mario->GetPlayerState<AMarioState>();
		if (marioState != nullptr)
		{
			if (marioState->Lives > 0)
			{
				marioState->Lives--;

				// Do we spawn dead mario or not?
				if (spawnDeadMario)
				{
					SpawnDeadMario(mario->GetActorLocation());
				}
				else
				{
					mario->Respawn(MarioPlayerStartLocation);
				}
			}
			else
			{
				APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
				if (gameState != nullptr)
				{
					gameState->IsGameOver = true;
				}
			}
		}
	}
}

void APlatformerGameModeBase::SpawnMarioTransform(FVector location, EMarioForm oldForm, EMarioForm newForm, EMarioDirection direction)
{
	if (MarioTransform == nullptr)
	{
		PauseActors();

		if (MarioTransformTemplate != nullptr)
		{
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				FTransform SpawnTransform(location);

				MarioTransform = World->SpawnActor<AMarioTransform>(MarioTransformTemplate, SpawnTransform, SpawnParams);
				MarioTransform->SetFlipbook(oldForm, newForm, direction);
			}
		}
	}
}

void APlatformerGameModeBase::OnMarioTransformEnded()
{
	UnpauseActors();

	if (MarioTransform != nullptr)
	{
		MarioTransform->Destroy();
		MarioTransform = nullptr;
	}
}

void APlatformerGameModeBase::PauseActors()
{
	for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AActor* actor = *ActorItr;
		actor->CustomTimeDilation = 0.0f;

		if (actor->ActorHasTag("MarioCharacter"))
		{
			AMarioCharacter* mario = Cast<AMarioCharacter>(actor);
			mario->GetSprite()->SetVisibility(false);
		}
	}
}

void APlatformerGameModeBase::UnpauseActors()
{
	for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AActor* actor = *ActorItr;
		actor->CustomTimeDilation = 1.0f;

		if (actor->ActorHasTag("MarioCharacter"))
		{
			AMarioCharacter* mario = Cast<AMarioCharacter>(actor);
			mario->GetSprite()->SetVisibility(true);
		}
	}
}

void APlatformerGameModeBase::SpawnDeadMario(FVector location)
{
	if (DeadMario == nullptr)
	{
		if (DeadMarioTemplate != nullptr)
		{
			PauseActors();

			UWorld* const world = GetWorld();
			if (world != nullptr)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				FTransform SpawnTransform(location);

				DeadMario = world->SpawnActor<ADeadMario>(DeadMarioTemplate, SpawnTransform, SpawnParams);
			}
		}
	}
}
