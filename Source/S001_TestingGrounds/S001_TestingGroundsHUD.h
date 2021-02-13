// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S001_TestingGroundsHUD.generated.h"

UCLASS()
class AS001_TestingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AS001_TestingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

