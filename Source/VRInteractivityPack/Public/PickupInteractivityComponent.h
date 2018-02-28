#pragma once

#include "CoreMinimal.h"
#include "GrabbableInteractivityComponent.h"
#include "PickupInteractivityComponent.generated.h"

/**
 * A component that specifies a point at which a HandComponent can grab and pick up.
 */
UCLASS(ClassGroup = (VRInteractivityPack), DisplayName = "Pickup", meta = (BlueprintSpawnableComponent))
class VRINTERACTIVITYPACK_API UPickupInteractivityComponent : public UGrabbableInteractivityComponent {
	
	GENERATED_BODY()
	
public:
	UPickupInteractivityComponent();
	
};
