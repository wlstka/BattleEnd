// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserInfo.generated.h"
/**
 * 
 */
class BATTLEEND_API UserInfo
{
public:
	UserInfo();
	~UserInfo();
};


USTRUCT(Atomic,BlueprintType)
struct FUserInfo
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UserID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UserNickName;
};