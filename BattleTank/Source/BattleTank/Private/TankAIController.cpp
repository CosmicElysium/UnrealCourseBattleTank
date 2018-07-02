// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "Engine/World.h"


void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (PlayerTank)
	{
		auto ControlledTank = Cast<ATank>(GetPawn());
		auto PlayerLocation = PlayerTank->GetActorLocation();
		ControlledTank->AimAt(PlayerLocation);
		ControlledTank->Fire();
	}
}


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

