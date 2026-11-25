// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Lecture8552SaveGame.generated.h"

/**
 * 
 */

class UItemDataAsset;

USTRUCT(BlueprintType)
struct FPlayerSaveData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	FTransform PlayerTransform;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	FRotator PlayerRotation;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	float Energy;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	TArray<UItemDataAsset*> Items;
};

UCLASS()
class LECTURE8552_API ULecture8552SaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	FPlayerSaveData PlayerSaveData;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SaveGame")
	TArray<FTransform> NPCTransforms;
	
	
};
