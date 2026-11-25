// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MarioHUD.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AMarioHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMarioHUD();

	UPROPERTY(EditAnywhere, Category = "Templates") TSubclassOf<UUserWidget> UserWidgetTemplate;

protected:
	virtual void BeginPlay() override;
	
};
