// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/BETitleUserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/HorizontalBox.h"
#include "Components/EditableText.h"

void UBETitleUserWidget::NativeConstruct()
{
	if (Button_EditorIP)
	{
		Button_EditorIP->OnClicked.AddDynamic(this, &UBETitleUserWidget::OnEditorIPButtonClicked);
	}

	if (Button_ServerIP)
	{
		Button_ServerIP->OnClicked.AddDynamic(this, &UBETitleUserWidget::OnServerIPButtonClicked);
	}

	if (Button_UserCustomIP)
	{
		Button_UserCustomIP->OnClicked.AddDynamic(this, &UBETitleUserWidget::OnUserCustomIPButtonClicked);
	}

	if (Button_UserCustomIPApply)
	{
		Button_UserCustomIPApply->OnClicked.AddDynamic(this, &UBETitleUserWidget::OnUserCustomIPApplyButtonClicked);
	}

}

void UBETitleUserWidget::OnEditorIPButtonClicked()
{
	if (TextBlock_EnterRoomIP)
	{
		FText IPText = FText::FromString(DefaultEditorIP);
		TextBlock_EnterRoomIP->SetText(IPText);
	}

}

void UBETitleUserWidget::OnServerIPButtonClicked()
{
	if (TextBlock_EnterRoomIP)
	{
		FText IPText = FText::FromString(DefaultServerIP);
		TextBlock_EnterRoomIP->SetText(IPText);
	}


}

void UBETitleUserWidget::OnUserCustomIPButtonClicked()
{
	if (Button_UserCustomIP)
	{
		Button_UserCustomIP->SetVisibility(ESlateVisibility::Collapsed);
		
		if (HorizontalBox_HideUserIP)
		{
			HorizontalBox_HideUserIP->SetVisibility(ESlateVisibility::Visible);
		}
	
	}
}

void UBETitleUserWidget::OnUserCustomIPApplyButtonClicked()
{
	
	if (TextBlock_EnterRoomIP)
	{
		FText UserCustomIPText = EditableText_UserCustomIP->GetText();
		TextBlock_EnterRoomIP->SetText(UserCustomIPText);
	}
}
