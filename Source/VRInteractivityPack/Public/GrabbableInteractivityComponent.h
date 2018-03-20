#pragma once

#include "CoreMinimal.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "InteractivityComponent.h"
#include "GrabbableInteractivityComponent.generated.h"

/**
 * Base class for all grabbable interactivity components.
 */
UCLASS(Abstract, ClassGroup = (VRInteractivityPack))
class UGrabbableInteractivityComponent : public UInteractivityComponent {
	
	GENERATED_BODY()
	
public:
	UGrabbableInteractivityComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grab Surface")
	ESurfaceShape SurfaceShape = ESurfaceShape::SS_SphereLarge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grab Surface")
	FTransform SurfaceOffset;

	UStaticMeshComponent* SurfaceShapeVisualizer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grab Surface")
	bool TestBool = false;

	UStaticMesh* SurfaceShapePlane;
	UStaticMesh* SurfaceShapeSphereLarge;
	
private:
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

};
