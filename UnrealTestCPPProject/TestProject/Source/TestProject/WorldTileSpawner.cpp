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
	
	AActorCppParent* newActor = GetWorld()->SpawnActor<AActorCppParent>(tileBlueprintToSpawn, GetActorTransform());
	FString baseString = "/Game/MotherEarth/Tiles/seperate_tile_polySurface1_pPlatonic1.seperate_tile_polySurface1_pPlatonic";
		//"StaticMesh'/Game/MotherEarth/Tiles/seperate_tile_polySurface1_pPlatonic1.seperate_tile_polySurface1_pPlatonic";
	int currentMeshNum = 1;
	FString currentFName = baseString + FString::FromInt(currentMeshNum);
	const TCHAR* tcharFileName = *currentFName;
	UStaticMesh* meshToUse = LoadObject<UStaticMesh>(NULL, tcharFileName, NULL, LOAD_None, NULL);
	if (meshToUse)
	{
		//newActor->editableStaticMesh->SetupAttachment(RootComponent);
		//newActor->editableStaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		//newActor->editableStaticMesh->SetStaticMesh(meshToUse);
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

