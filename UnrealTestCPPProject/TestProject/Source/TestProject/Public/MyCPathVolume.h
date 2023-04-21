// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPathVolume.h"
#include "MyCPathVolume.generated.h"

UCLASS()
class TESTPROJECT_API AMyCPathVolume : public ACPathVolume
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCPathVolume();

	UPROPERTY(EditAnywhere)
		float maxDistanceFromGround = 6715.0;

	UPROPERTY(EditAnywhere)
		float DistancePenalty = 500.0;

public:
	// Overwrite this function to change the priority of nodes as they are selected for the path.
// Note that this is potentially called thousands of times per FindPath call, so it shouldnt be too complex (unless your graph not very dense)
	virtual void CalcFitness(CPathAStarNode& Node, FVector TargetLocation) override;

	// Overwrite this function to change the default conditions of a tree being free/ocupied.
	// You may also save other information in the Data field of an Octree, as only the least significant bit is used.
	// This is called during graph generation, for every subtree including leafs, so potentially millions of times.
	virtual bool CheckAndUpdateTree(CPathOctree* OctreeRef, FVector TreeLocation, uint32 Depth) override;

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};


/*
#include "CoreMinimal.h"
#include "CPathFindPath.h"
#include "MyCPathAsyncFindPath.generated.h"

UCLASS()
class TESTPROJECT_API UMyCPathAsyncFindPath : public UCPathAsyncFindPath
{
	GENERATED_BODY()


}
*/