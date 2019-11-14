// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActor.h"
#include "ChildActor.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API AChildActor : public AParentActor
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:
	virtual void TestMethod() override;
	
};
