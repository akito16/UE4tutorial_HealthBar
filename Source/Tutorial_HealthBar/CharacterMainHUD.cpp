// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMainHUD.h"
#include "Blueprint/UserWidget.h"

ACharacterMainHUD::ACharacterMainHUD() {
	static ConstructorHelpers::FClassFinder<UUserWidget> HealthBarObj(TEXT("/Game/UI/UI_Health"));
	HUDWidgetClass = HealthBarObj.Class;
}

void ACharacterMainHUD::BeginPlay() {
	Super::BeginPlay();

	if (HUDWidgetClass != nullptr) {
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget) {
			CurrentWidget->AddToViewport();
		}
	}
}