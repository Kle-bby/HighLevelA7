// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioHUD.h"
#include "Platformer2D.h"
#include "Blueprint/UserWidget.h"


AMarioHUD::AMarioHUD() :
	UserWidgetTemplate(nullptr)
{
}

void AMarioHUD::BeginPlay()
{
	Super::BeginPlay();

	if (UserWidgetTemplate != nullptr)
	{
		UUserWidget* userWidget = CreateWidget(GetWorld(), UserWidgetTemplate);
		if (userWidget != nullptr)
		{
			userWidget->AddToViewport();
		}
		else
		{
			UE_LOG(LogPlatformer2D, Error, TEXT("MarioHUD error creating UserWidget, as a result UserWidget was not added to the viewport"));
		}
	}
	else
	{
		UE_LOG(LogPlatformer2D, Error, TEXT("MarioHUD error creating UserWidget, the UserWidgetTemplate was null"));
	}
}
