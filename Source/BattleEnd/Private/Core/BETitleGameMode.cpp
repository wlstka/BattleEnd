// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/BETitleGameMode.h"
#include "UI/BETitleHUD.h"

ABETitleGameMode::ABETitleGameMode()
{
	HUDClass = ABETitleHUD::StaticClass();

}
