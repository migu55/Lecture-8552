// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile/SpawnProjectile.h"

#include "Character/BaseCharacter.h"
#include "Components/SkeletalMeshComponent.h"

void USpawnProjectile::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                              const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	
	if (MeshComp && MeshComp->GetOwner())
	{
		if (ABaseCharacter* Player = Cast<ABaseCharacter>(MeshComp->GetOwner()))
		{
			Player->SpawnProjectile(SocketName, ProjectileClass);
		}
	}
}
