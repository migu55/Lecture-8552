// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile/Projectile.h"

#include "Components/SphereComponent.h"
#include "Engine/World.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	
	RootComponent = SphereCollider;
	
	SphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SphereCollider->SetCollisionResponseToAllChannels(ECR_Block);
	SphereCollider->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	
	ProjectileMovement->InitialSpeed = 2000.0;
	ProjectileMovement->MaxSpeed = 2000.0;
	
	ProjectileMovement->ProjectileGravityScale = 0.0f;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	SphereCollider->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	SphereCollider->IgnoreActorWhenMoving(GetOwner(), true);
	SetLifeSpan(10.0f);
	
}

void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	
	float BaseDamage = 25.0f;
	
	if (OtherActor && OtherActor != this && OtherActor != GetOwner() && OtherComp)
	{
		
		
		if (bApplyRadialDamage)
		{
			TArray<AActor*> IgnoreActors;
			IgnoreActors.Add(this);
			
			if (GetOwner())
			{
				IgnoreActors.Add(GetOwner());
			}
			
			UGameplayStatics::ApplyRadialDamage(
				GetWorld(),
				BaseDamage,
				Hit.ImpactPoint,
				1500.0f,
				UDamageType::StaticClass(),
				IgnoreActors,
				this,
				GetInstigatorController(),
				false
			);
			
			//play sounds
		} else
		{
			UGameplayStatics::ApplyDamage(
				OtherActor,
				BaseDamage,
				GetInstigatorController(),
				this,
				UDamageType::StaticClass()
				);
		}
		
		Destroy();
		
		UE_LOG(LogTemp, Warning, TEXT("Projectile Hit: %s"), *OtherActor->GetName());
	} 
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

