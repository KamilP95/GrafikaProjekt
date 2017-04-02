#pragma once
#include "Solid3D.h"
class Cylinder :
	public Solid3D
{
public:
	float Radius;
	float Height;

	Cylinder(float radius = 5, float height = 20) : Radius(radius), Height(height) {}
	
	virtual void Draw() override;
};

