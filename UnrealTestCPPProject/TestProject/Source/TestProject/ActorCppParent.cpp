// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorCppParent.h"

// Sets default values
AActorCppParent::AActorCppParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AActorCppParent::BeginPlay()
{
	Super::BeginPlay();
}


void AActorCppParent::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
}

// Called every frame
void AActorCppParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

