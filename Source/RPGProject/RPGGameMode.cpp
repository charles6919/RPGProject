// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGGameMode.h"
#include "PlayerPawn.h"
#include "MyPlayerController.h"


ARPGGameMode::ARPGGameMode()
{
	DefaultPawnClass = APlayerPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}

void ARPGGameMode::PostLogin(APlayerController* NewPlayer)
{
	RLOG(Warning, TEXT("PostLogin Begin."));
	Super::PostLogin(NewPlayer);
	RLOG(Warning, TEXT("PostLogin End."));
}

