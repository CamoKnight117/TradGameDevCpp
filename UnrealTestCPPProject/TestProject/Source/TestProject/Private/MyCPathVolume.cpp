// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCPathVolume.h"

// Sets default values
AMyCPathVolume::AMyCPathVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	Super();
}

void AMyCPathVolume::CalcFitness(CPathAStarNode& Node, FVector TargetLocation)
{
	// Standard weithted A* Heuristic, f(n) = g(n) + e*h(n).   (e = 3.5f)
	if (Node.PreviousNode)
	{
		Node.DistanceSoFar = Node.PreviousNode->DistanceSoFar + FVector::Distance(Node.PreviousNode->WorldLocation, Node.WorldLocation);
	}

	// Get isNearGround from TreeUserData, need second bit. 0010 == 2
	uint32 isGround = Node.TreeData & 0x00000002;

	// Add severe penalty for being far from the ground
	float distanceFromTarget = FVector::Distance(Node.WorldLocation, TargetLocation);
	if (!isGround && distanceFromTarget > VoxelSize) {
		Node.DistanceSoFar += DistancePenalty;
	}

	Node.FitnessResult = Node.DistanceSoFar + 3.5f * distanceFromTarget;
}

bool AMyCPathVolume::CheckAndUpdateTree(CPathOctree* OctreeRef, FVector TreeLocation, uint32 Depth)
{
	bool isFree = OctreeRef->GetIsFree();
	if (isFree)
	{
		double distanceFromGround = FVector::Dist(TreeLocation, FVector(0));
		uint32 isNearGround = (distanceFromGround < maxDistanceFromGround);

		//Save isNearGround in second bit
		// 1101 == D
		OctreeRef->Data &= 0xFFFFFFFD;
		OctreeRef->Data |= (isNearGround << 1);
	}

	return isFree;
}