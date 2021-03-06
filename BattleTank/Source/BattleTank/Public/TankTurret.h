// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

// Tank Turret only
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	// -1 is max down movement +1 is max up movement
	void Rotation(float RelativeSpeed);	
private:
	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxDegreesPerSec = 15;
};
