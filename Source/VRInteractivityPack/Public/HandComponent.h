#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HandComponent.generated.h"

/**
* C++ base class for hand/motion controller component. Can create Blueprint subclasses to add custom functionality.
*/
UCLASS(ClassGroup=(VRInteractivityPack), meta=(IsBlueprintBase = "true"))
class VRINTERACTIVITYPACK_API UHandComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHandComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
