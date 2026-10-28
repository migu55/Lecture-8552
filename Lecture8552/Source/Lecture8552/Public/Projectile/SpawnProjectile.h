// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "SpawnProjectile.generated.h"

class AProjectile;
/**
 * 
 */
UCLASS()
class LECTURE8552_API USpawnProjectile : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	FName SocketName = TEXT("RightHandIndex1");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	TSubclassOf<AProjectile> ProjectileClass;
	
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
