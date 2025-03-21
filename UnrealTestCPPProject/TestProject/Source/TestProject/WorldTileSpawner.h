// Fill out your copyright notice in the Description page of Project Settings.


#pragma once
#include "ActorCppParent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldTileSpawner.generated.h"

UCLASS()
class TESTPROJECT_API AWorldTileSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldTileSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SpawnActorWithMesh();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActorCppParent>tileBlueprintToSpawn;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActorCppParent>waterBlueprintToSpawn;
};
