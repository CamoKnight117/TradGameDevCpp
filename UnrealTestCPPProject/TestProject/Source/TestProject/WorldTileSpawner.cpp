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
	int totalLandTiles = 1349;
	int totalWaterTiles = 1071;
	for (int i = 1; i <= totalLandTiles; i++)
	{
		AActorCppParent* newActor = GetWorld()->SpawnActor<AActorCppParent>(tileBlueprintToSpawn, GetActorTransform());
		newActor->canGrowGrass = true;
		newActor->canGrowTrees = true;
		//Reference string format: StaticMesh'/Game/MotherEarth/Tiles/LandTile/LandTile_Landtile1.LandTile_Landtile1'

		FString baseString = "StaticMesh'/Game/MotherEarth/Tiles/LandTile/LandTile_Landtile";	
		FString appendedString = ".LandTile_LandTile";
		FString currentFName = baseString + FString::FromInt(i) + appendedString + FString::FromInt(i);

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
		//Reference string format: StaticMesh'/Game/MotherEarth/Tiles/WaterTile/WaterTile_Watertile1.WaterTile_WaterTile1'
		FString baseString = "StaticMesh'/Game/MotherEarth/Tiles/WaterTile/WaterTile_Watertile";
		FString appendedString = ".WaterTile_WaterTile";
		FString currentFName = baseString + FString::FromInt(i) + appendedString + FString::FromInt(i);

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

