#include "WorldTileSpawner.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AWorldTileSpawner::AWorldTileSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldTileSpawner::BeginPlay()
{
	Super::BeginPlay();	
	int totalLandTiles = 1341;
	int totalWaterTiles = 1079;
	for (int i = 1; i <= totalLandTiles; i++)
	{
		AActorCppParent* newActor = GetWorld()->SpawnActor<AActorCppParent>(tileBlueprintToSpawn, GetActorTransform());
		newActor->canGrowGrass = true;
		newActor->canGrowTrees = true;
		//Reference string format: StaticMesh'/Game/MotherEarth/TilesByType/Land/landTile__1000_.landTile__1000_'

		FString baseString = "StaticMesh'/Game/MotherEarth/TilesByType/Land/landTile__";	
		FString appendedString = "_.landTile__";
		FString currentFName = baseString + FString::FromInt(i) + appendedString + FString::FromInt(i) + "_'";

		UStaticMesh* meshToUse = LoadObject<UStaticMesh>(NULL, *currentFName, NULL, LOAD_None, NULL);
		//meshToUse->ComplexCollisionMesh = meshToUse;
		if (meshToUse != nullptr)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Mesh non null"));
			newActor->runtimeSetMesh = meshToUse;
			if ((newActor->runtimeSetMesh) == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Actor mesh is nullptr"));
			}
			else
			{	
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Error loading mesh"));
		}
	}
	
	for (int i = 1; i <= totalWaterTiles; i++)
	{
		AActorCppParent* newActor = GetWorld()->SpawnActor<AActorCppParent>(waterBlueprintToSpawn, GetActorTransform());
		//Reference string format: StaticMesh'/Game/MotherEarth/TilesByType/Water/waterTile__1000_.waterTile__1000_'
		FString baseString = "StaticMesh'/Game/MotherEarth/TilesByType/Water/waterTile__";
		FString appendedString = "_.waterTile__";
		FString currentFName = baseString + FString::FromInt(i) + appendedString + FString::FromInt(i) + "_'";

		UStaticMesh* meshToUse = LoadObject<UStaticMesh>(NULL, *currentFName, NULL, LOAD_None, NULL);
		//meshToUse->ComplexCollisionMesh = meshToUse;
		if (meshToUse != nullptr)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Mesh non null"));
			newActor->runtimeSetMesh = meshToUse;
			if ((newActor->runtimeSetMesh) == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Actor mesh is nullptr"));
			}
			else
			{
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Error loading mesh"));
		}
	}
}

// Called every frame
void AWorldTileSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWorldTileSpawner::SpawnActorWithMesh()
{

}

