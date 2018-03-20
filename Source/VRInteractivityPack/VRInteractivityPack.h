// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
* By default, the orientation of a grabbable interactivity component defines how the right hand will
* grab it. This is a data type used to distinguish how the left hand grabs in relation to the right.
*/
UENUM(BlueprintType)
enum class ESymmetryAxis : uint8 {
	SA_X					UMETA(DisplayName = "X axis (prayer)"),
	SA_Y					UMETA(DisplayName = "Y axis (awkward handshake)"),
	SA_Z					UMETA(DisplayName = "Z axis (keyboard)")
};


/**
* Data type for approximating the surface shape near a grabbable point.
*/
UENUM(BlueprintType)
enum class ESurfaceShape : uint8 {
	SS_Plane				UMETA(DisplayName = "Plane"),
	SS_SphereLarge			UMETA(DisplayName = "Sphere large"),
	SS_SphereMedium			UMETA(DisplayName = "Sphere medium"),
	SS_SphereSmall			UMETA(DisplayName = "Sphere small"),
	SS_SphereTiny			UMETA(DisplayName = "Sphere tiny"),
	SS_CylinderLarge		UMETA(DisplayName = "Cylinder large"),
	SS_CylinderMedium		UMETA(DisplayName = "Cylinder medium"),
	SS_CylinderSmall		UMETA(DisplayName = "Cylinder small"),
	SS_CylinderTiny			UMETA(DisplayName = "Cylinder tiny"),
	SS_Bowstring			UMETA(DisplayName = "Bowstring")
};