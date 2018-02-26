#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InteractivityComponent.generated.h"

/**
* Base class for all interactivity components.
*/
UCLASS(Abstract, ClassGroup=(VRInteractivityPack))
class UInteractivityComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractivityComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
