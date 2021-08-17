// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RPGProject.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "GameFramework/Actor.h"
#include "WindMill.generated.h"

UCLASS()
class RPGPROJECT_API AWindMill : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWindMill();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mill;

	UPROPERTY(VisibleAnywhere)
	URotatingMovementComponent* Movement;

	UPROPERTY(EditAnywhere)
	float RotateSpeed;

private:
	float mSetRotateSpeed;
};
