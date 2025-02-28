// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/BEUserWidget.h"
#include "BETitleUserWidget.generated.h"

class UButton;
class UTextBlock;
class UEditableText;
class UHorizontalBox;

/**
 * 
 */
UCLASS()
class BATTLEEND_API UBETitleUserWidget : public UBEUserWidget
{
	GENERATED_BODY()
	
public:

protected:

	virtual void NativeConstruct() override;

#pragma region LeftButtonClick 
	UFUNCTION()
	void OnEditorIPButtonClicked();

	UFUNCTION()
	void OnServerIPButtonClicked();

	UFUNCTION()
	void OnUserCustomIPButtonClicked();

	UFUNCTION()
	void OnUserCustomIPApplyButtonClicked();
#pragma endregion

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	FString DefaultEditorIP = TEXT("127.0.0.1");

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	FString DefaultServerIP = TEXT("127.0.0.1:7777");


private:

#pragma region LeftButtonClick 
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_EditorIP;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_ServerIP;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_UserCustomIP;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_UserCustomIPApply;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_HideUserIP;

	UPROPERTY(meta = (BindWidget))
	UEditableText* EditableText_UserCustomIP;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextBlock_EnterRoomIP;


#pragma endregion









};
