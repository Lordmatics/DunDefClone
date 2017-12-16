// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseTower.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ABaseTower::ABaseTower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_root = CreateDefaultSubobject<USceneComponent>(TEXT("Tower Root Component"));
	RootComponent = m_root;

	m_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tower Static Mesh Component"));
	m_staticMesh->SetRelativeLocation(FVector(0.0f));
	m_staticMesh->SetRelativeRotation(FRotator(0.0f));
	m_staticMesh->SetRelativeScale3D(FVector(1.0f));
	m_staticMesh->SetupAttachment(m_root);

	m_animatedMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Tower Animated Mesh Component"));
	m_animatedMesh->SetRelativeLocation(FVector(0.0f));
	m_animatedMesh->SetRelativeRotation(FRotator(0.0f));
	m_animatedMesh->SetRelativeScale3D(FVector(1.0f));
	m_animatedMesh->SetupAttachment(m_root);

	m_towerData = TowerData(15.0f, 10.0f, 1.0f, 100.0f);
}

// Called when the game starts or when spawned
void ABaseTower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

