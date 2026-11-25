// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Lecture8552GameMode.h"

#include "Character/BaseCharacter.h"
#include "Character/NPCCharacter.h"
#include "Core/Lecture8552GameInstance.h"
#include "Core/Lecture8552SaveGame.h"
#include "Engine/World.h"

ALecture8552GameMode::ALecture8552GameMode()
{
	DefaultPawnClass = ABaseCharacter::StaticClass();
}

void ALecture8552GameMode::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnActors();
}

void ALecture8552GameMode::SpawnActors()
{
	ULecture8552GameInstance* GI = Cast<ULecture8552GameInstance>(GetGameInstance());
	if (!GetWorld() || !GI || !GI->SaveData) return;
	
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;
	
	const TArray<FTransform>& TransformsToUse = GI->SaveData->NPCTransforms;
	
	if (TransformsToUse.Num() > 0)
	{
		for (const FTransform& SpawnTransform : TransformsToUse)
		{
			GetWorld()->SpawnActor<ANPCCharacter>(NPCClassToSpawn, SpawnTransform, SpawnInfo);
		}
	} else
	{
		for (FVector loaction : DefaultNPCSpawnLocations)
		{
			const FTransform FirstSpawnTransform(FRotator::ZeroRotator, loaction, FVector(1.0f, 1.0f, 1.0f));
			
			GetWorld()->SpawnActor<ANPCCharacter>(NPCClassToSpawn, FirstSpawnTransform, SpawnInfo);
		}
	}
}
