// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TowerDataAsset.generated.h"

UENUM(BlueprintType)
enum class EElementalAffinity : uint8
{
	E_Fire	UMETA(DisplayName="Fire"),
	E_Water	UMETA(DisplayName="Water"),
	E_Wind	UMETA(DisplayName="Wind"),
	E_Earth	UMETA(DisplayName="Earth"),
	E_Dark	UMETA(DisplayName="Dark"),
	E_Light	UMETA(DisplayName="Light"),
	E_NONE	UMETA(DisplayName="None")
};

USTRUCT(BlueprintType)
struct FTowerData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower Data")
		float m_damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower Data")
		float m_fireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower Data")
		float m_range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower Data")
		float m_health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower Data")
		float m_armour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower Data")
		EElementalAffinity m_element;

	FTowerData()
	{
		m_damage = 1.0f;
		m_fireRate = 1.0f;
		m_range = 1.0f;
		m_health = 10.0f;
		m_armour = 1.0f;
		m_element = EElementalAffinity::E_NONE;
	}

	FTowerData(const FTowerData& other)
	{
		m_damage = other.m_damage;
		m_fireRate = other.m_fireRate;
		m_range = other.m_range;
		m_health = other.m_health;
		m_armour = other.m_armour;
		m_element = other.m_element;
	}

	FTowerData(float dmg, float rate, float range, float hp, float armour, EElementalAffinity element)
	{
		m_damage = dmg;
		m_fireRate = rate;
		m_range = range;
		m_health = hp;
		m_armour = armour;
		m_element = element;
	}
};
/**
 * 
 */
UCLASS()
class DUNGEONDEFENDERS_API UTowerDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower Data")
		FTowerData m_towerData;
	
	
};
