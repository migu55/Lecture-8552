// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BaseAIController.h"

#include "NavigationSystem.h"
#include "Elements/Framework/TypedElementSorter.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ABaseAIController::ABaseAIController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseAIController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	
	if (PlayerPawn)
	{
		FVector PlayerLocation = PlayerPawn->GetActorLocation();
		FNavLocation ProjectedNavLoc;
		
		UNavigationSystemV1 *NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
		if (NavSys && NavSys->ProjectPointToNavigation(PlayerLocation, ProjectedNavLoc, FVector(500.0f, 500.0f, 1000.0f)))
		{
			MoveToLocation(ProjectedNavLoc.Location);
		}
	}
}

