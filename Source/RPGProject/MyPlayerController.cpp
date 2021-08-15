// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	RLOG_S(Warning);
}

void AMyPlayerController::OnPossess(APawn* aPawn)
{
	RLOG_S(Warning);
	Super::OnPossess(aPawn);
}
