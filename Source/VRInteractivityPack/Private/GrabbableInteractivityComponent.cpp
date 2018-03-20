#include "GrabbableInteractivityComponent.h"

// Set default property values
UGrabbableInteractivityComponent::UGrabbableInteractivityComponent() {

	SurfaceShapeVisualizer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Surface Shape Visualizer"));
	SurfaceShapeVisualizer->SetupAttachment(this);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SurfaceShapeVisualizerAsset(
		TEXT("/Game/Geometry/G_GrabPose_Cylinder_Large.G_GrabPose_Cylinder_Large"));
	if (SurfaceShapeVisualizerAsset.Succeeded()) {
		SurfaceShapeVisualizer->SetStaticMesh(SurfaceShapeVisualizerAsset.Object);
	}

}
