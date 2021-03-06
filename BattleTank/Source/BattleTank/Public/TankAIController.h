// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

	virtual void Tick(float) override;

	virtual void BeginPlay() override;
	
	// How close AI gets to player
	float AcceptanceRadius = 3000;
};
