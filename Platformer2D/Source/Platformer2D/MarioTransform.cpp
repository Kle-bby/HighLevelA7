// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioTransform.h"
#include "MarioState.h"
#include "PlatformerGameModeBase.h"
#include "PaperFlipbookComponent.h"


// Sets default values
AMarioTransform::AMarioTransform() :
	FlipbookComponent(nullptr),
	TransformFlipbook(nullptr),
	DamageFlipbook(nullptr)
{
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("PickupFlipbook");
	FlipbookComponent->SetLooping(false);
	FlipbookComponent->OnFinishedPlaying.AddDynamic(this, &AMarioTransform::OnFinishedPlaying);
	RootComponent = FlipbookComponent;
}

void AMarioTransform::SetFlipbook(EMarioForm oldForm, EMarioForm newForm, EMarioDirection direction)
{
	// Update the capsule half height, based on the current form
	if (oldForm == EMarioForm::Small && newForm == EMarioForm::Super)
	{
		FlipbookComponent->SetFlipbook(TransformFlipbook);
	}
	else if (oldForm == EMarioForm::Super && newForm == EMarioForm::Small)
	{
		FlipbookComponent->SetFlipbook(DamageFlipbook);
	}

	// Is Mario's direction left, update the flipbook's direction
	if (direction == EMarioDirection::Left)
	{
		FlipbookComponent->SetRelativeScale3D(FVector(-1.0f, 1.0f, 1.0f));
	}

	// Play the flipbook's animation
	FlipbookComponent->PlayFromStart();
}

void AMarioTransform::OnFinishedPlaying()
{
	APlatformerGameModeBase* gameMode = GetWorld()->GetAuthGameMode<APlatformerGameModeBase>();
	if (gameMode != nullptr)
	{
		gameMode->OnMarioTransformEnded();
	}
}


