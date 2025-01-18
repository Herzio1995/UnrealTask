#include "Skate.h"
#include <Components/StaticMeshComponent.h>

ASkate::ASkate()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	PrimaryActorTick.bCanEverTick = true;
	bool bIsMoving = false;

}

void ASkate::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASkate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

