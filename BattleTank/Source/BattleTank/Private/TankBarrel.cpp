// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move barrel the right amount this frame
	//Give a max elevation speed
	UE_LOG(LogTemp, Warning, TEXT("barrel elevate called at speed %f"), DegreesPerSecond);
}