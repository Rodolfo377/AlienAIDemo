// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AlienAIDemoHUD.generated.h"

UCLASS()
class AAlienAIDemoHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAlienAIDemoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

