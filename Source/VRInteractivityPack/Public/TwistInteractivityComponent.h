#pragma once

#include "CoreMinimal.h"
#include "GrabbableInteractivityComponent.h"
#include "TwistInteractivityComponent.generated.h"

/**
 * An interactive 'twistable' component that can be physically twisted by a HandComponent.
 */
UCLASS(ClassGroup = (VRInteractivityPack), DisplayName = "Twist", meta = (BlueprintSpawnableComponent))
class VRINTERACTIVITYPACK_API UTwistInteractivityComponent : public UGrabbableInteractivityComponent {
	
	GENERATED_BODY()
	
public:
	UTwistInteractivityComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UStaticMesh* TwistMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UStaticMesh* HousingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float AngleRange = 360.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float DefaultAngle = 180.0;

	float CurrentTargetAngle;
	
};
