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
	int totalTiles = 2419;
	for (int i = 1; i < totalTiles; i++)
	{
		AActorCppParent* newActor = GetWorld()->SpawnActor<AActorCppParent>(tileBlueprintToSpawn, GetActorTransform());
		//Reference string format: StaticMesh'/Game/MotherEarth/Tiles/tile__1_.tile__1_'
		FString baseString = "StaticMesh'/Game/MotherEarth/Tiles/tile__";	
		FString appendedString = "_.tile__";
		FString currentFName = baseString + FString::FromInt(i) + appendedString + FString::FromInt(i) + "_'";

		UStaticMesh* meshToUse = LoadObject<UStaticMesh>(NULL, *currentFName, NULL, LOAD_None, NULL);
		meshToUse->ComplexCollisionMesh = meshToUse;
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

