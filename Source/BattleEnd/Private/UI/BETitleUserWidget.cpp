// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/BETitleUserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/HorizontalBox.h"
#include "Components/EditableText.h"

#define LOCTEXT_NAMESPACE "WBP_TitleHUD"



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

	if (Button_NickNameApply)
	{
		Button_NickNameApply->OnClicked.AddDynamic(this, &UBETitleUserWidget::OnUserNickNameApplyButtonClicked);
	}


}


// 좌측 화면

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


// 우측 화면


void UBETitleUserWidget::OnUserNickNameApplyButtonClicked()
{

	if (EditableTextBox_NickName && TextBlock_UserNickName)
	{

		FText NickNameText = EditableTextBox_NickName->GetText();
		TextBlock_UserNickName->SetText(FText::Format(LOCTEXT("NickNameFormat", "현재 닉네임 : {0}"), NickNameText));
	}

}

#undef LOCTEXT_NAMESPACE  //  네임스페이스 해제 (필수)
