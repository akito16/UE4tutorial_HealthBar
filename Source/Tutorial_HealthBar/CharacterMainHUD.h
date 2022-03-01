// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CharacterMainHUD.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIAL_HEALTHBAR_API ACharacterMainHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACharacterMainHUD();

	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Health")
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Health")
		class UUserWidget* CurrentWidget;
};
