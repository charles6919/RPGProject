// Fill out your copyright notice in the Description page of Project Settings.


#include "WindMill.h"

// Sets default values
AWindMill::AWindMill()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mill = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MILL"));
	Movement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("MOVEMENT"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> SM_MILL(TEXT("/Game/RPG/Objects/Meshes/SM_House_Var02_Extra.SM_House_Var02_Extra"));
	if (SM_MILL.Succeeded())
		Mill->SetStaticMesh(SM_MILL.Object);

	RotateSpeed = 90.0f;
	mSetRotateSpeed = RotateSpeed;
	Movement->RotationRate = FRotator(mSetRotateSpeed, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void AWindMill::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWindMill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mSetRotateSpeed != RotateSpeed)
	{
		mSetRotateSpeed = RotateSpeed;
		Movement->RotationRate = FRotator(mSetRotateSpeed, 0.0f, 0.0f);
	}

}

