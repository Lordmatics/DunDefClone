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

	struct TowerData
	{
		float m_damage;
		float m_range;
		float m_fireRate;
		float m_health;

		TowerData()
		{
			m_damage = 1.0f;
			m_range = 1.0f;
			m_fireRate = 1.0f;
			m_health = 100.0f;
		}

		TowerData(float _dmg, float _rng, float _rate, float _hp)
		{
			m_damage = _dmg;
			m_range = _rng;
			m_fireRate = _rate;
			m_health = _hp;
		}
	};

	TowerData m_towerData;
	
	
};
