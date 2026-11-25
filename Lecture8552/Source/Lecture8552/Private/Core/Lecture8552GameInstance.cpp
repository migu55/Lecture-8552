// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Lecture8552GameInstance.h"

#include "Character/NPCCharacter.h"
#include "Core/Lecture8552SaveGame.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

void ULecture8552GameInstance::SavePlayerData(FPlayerSaveData PlayerSaveData)
{
	if (!IsValid(SaveData))
	{
		return;
	}
	
	SaveData->PlayerSaveData = PlayerSaveData;
}

void ULecture8552GameInstance::SaveNPCData()
{
	if (!IsValid(SaveData))
	{
		return;
	}
	
	SaveData->NPCTransforms.Empty();
	
	TArray<AActor*> FoundNPCs;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPCCharacter::StaticClass(), FoundNPCs);
	
	for (AActor* Actor : FoundNPCs)
	{
		if (IsValid(Actor))
		{
			const FTransform ActorTransform = Actor->GetActorTransform();
			SaveData->NPCTransforms.Add(ActorTransform);
		}
	}
}
