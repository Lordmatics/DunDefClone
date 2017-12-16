// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseTower.generated.h"

UCLASS()
class DUNGEONDEFENDERS_API ABaseTower : public AActor
{
	GENERATED_BODY()
	
protected:
	
	UPROPERTY(EditAnywhere, Category = "Base Tower")
		class USceneComponent* m_root;

	UPROPERTY(EditAnywhere, Category = "Base Tower")
		class UStaticMeshComponent* m_staticMesh;

	UPROPERTY(EditAnywhere, Category = "Base Tower")
		class USkeletalMeshComponent* m_animatedMesh;
public:	
	// Sets default values for this actor's properties
	ABaseTower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Tower")
		class UTowerDataAsset* m_towerDataAsset;

	// TODO: Events for OnEnemySeen / OnEnemyLost
};
