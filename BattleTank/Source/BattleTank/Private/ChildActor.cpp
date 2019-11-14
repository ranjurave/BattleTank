// Fill out your copyright notice in the Description page of Project Settings.


#include "ChildActor.h"

void AChildActor::BeginPlay()
{
	Super::BeginPlay();
	TestMethod();
}
void AChildActor::TestMethod() 
{ 
	Super::TestMethod();
	UE_LOG(LogTemp, Warning, TEXT("This is a text from child"));
}
