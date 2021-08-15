// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RPGProject.h"
#include "GameFramework/GameModeBase.h"
#include "RPGGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API ARPGGameMode : public AGameModeBase
{
	GENERATED_BODY()

	ARPGGameMode();

public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
