// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/BETitleHUD.h"
#include "UI/BETitleUserWidget.h"

void ABETitleHUD::BeginPlay()
{
	Super::BeginPlay();

	UClass* WidgetClass = StaticLoadClass(UBETitleUserWidget::StaticClass(), nullptr, TEXT("/Game/UI/Title/WBP_TitleHUD.WBP_TitleHUD_C"));
    if (!WidgetClass)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load WBP_Title!"));
        return;
    }

    UUserWidget* TitleWidgt = CreateWidget<UUserWidget>(GetWorld()->GetFirstPlayerController(), WidgetClass);
    if (TitleWidgt)
    {
        TitleWidgt->AddToViewport();
    }

    GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;


}
