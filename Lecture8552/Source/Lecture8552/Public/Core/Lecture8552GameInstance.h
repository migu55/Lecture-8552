// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Lecture8552GameInstance.generated.h"

struct FPlayerSaveData;
class ULecture8552SaveGame;
/**
 * 
 */
UCLASS()
class LECTURE8552_API ULecture8552GameInstance : public UGameInstance
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable, Category = "SaveGame")
	void SavePlayerData(FPlayerSaveData PlayerSaveData);
	
	UFUNCTION(BlueprintCallable, Category = "SaveGame")
	void SaveNPCData();
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	TObjectPtr<ULecture8552SaveGame> SaveData;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	FString Slot = TEXT("SaveSlot_01");
};
