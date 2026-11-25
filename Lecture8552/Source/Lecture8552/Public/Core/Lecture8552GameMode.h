// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Lecture8552GameMode.generated.h"

class ANPCCharacter;
/**
 * 
 */
UCLASS()
class LECTURE8552_API ALecture8552GameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	ALecture8552GameMode();
	
	protected:
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable, Category = "Spawner")
	void SpawnActors();
	
	UPROPERTY(EditAnywhere, Category = "Spawner")
	TSubclassOf<ANPCCharacter> NPCClassToSpawn;
	
	UPROPERTY(EditAnywhere, Category = "Spawner")
	TArray<FVector> DefaultNPCSpawnLocations;
};
