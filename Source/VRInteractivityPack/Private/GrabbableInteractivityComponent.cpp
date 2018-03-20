#include "GrabbableInteractivityComponent.h"

// Set default property values
UGrabbableInteractivityComponent::UGrabbableInteractivityComponent() {

	SurfaceShapeVisualizer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Surface Shape Visualizer"));
	SurfaceShapeVisualizer->SetupAttachment(this);

}

void UGrabbableInteractivityComponent::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent) {
	
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	UStaticMesh* SurfaceShapeToLoad = nullptr;
	
	if (SurfaceShape == ESurfaceShape::SS_Plane) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_Plane.G_SurfaceShape_Plane"), NULL, LOAD_None, NULL);
	} else if (SurfaceShape == ESurfaceShape::SS_SphereLarge) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_SphereLarge.G_SurfaceShape_SphereLarge"), NULL, LOAD_None, NULL);
	} else if (SurfaceShape == ESurfaceShape::SS_SphereMedium) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_SphereMedium.G_SurfaceShape_SphereMedium"), NULL, LOAD_None, NULL);
	} else if (SurfaceShape == ESurfaceShape::SS_SphereSmall) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_SphereSmall.G_SurfaceShape_SphereSmall"), NULL, LOAD_None, NULL);
	}
	else if (SurfaceShape == ESurfaceShape::SS_SphereTiny) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_SphereTiny.G_SurfaceShape_SphereTiny"), NULL, LOAD_None, NULL);
	}
	else if (SurfaceShape == ESurfaceShape::SS_CylinderLarge) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_CylinderLarge.G_SurfaceShape_CylinderLarge"), NULL, LOAD_None, NULL);
	}
	else if (SurfaceShape == ESurfaceShape::SS_CylinderMedium) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_CylinderMedium.G_SurfaceShape_CylinderMedium"), NULL, LOAD_None, NULL);
	}
	else if (SurfaceShape == ESurfaceShape::SS_CylinderSmall) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_CylinderSmall.G_SurfaceShape_CylinderSmall"), NULL, LOAD_None, NULL);
	}
	else if (SurfaceShape == ESurfaceShape::SS_CylinderTiny) {
		SurfaceShapeToLoad = LoadObject<UStaticMesh>(NULL,
			TEXT("/Game/Geometry/G_SurfaceShape_CylinderTiny.G_SurfaceShape_CylinderTiny"), NULL, LOAD_None, NULL);
	}

	if (SurfaceShapeToLoad != nullptr) {
		SurfaceShapeVisualizer->SetStaticMesh(SurfaceShapeToLoad);
	}

}
