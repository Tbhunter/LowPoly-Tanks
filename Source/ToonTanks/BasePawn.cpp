// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	// Base mesh of the tank pawn
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("Base Mesh");
	BaseMesh->SetupAttachment(CapsuleComp);

	// turret mesh for the tank pawn
	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>("Turret Mesh");
	TurretMesh->SetupAttachment(BaseMesh);

	// spawn point for the tanks projectile
	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>("Spawn Point");
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


