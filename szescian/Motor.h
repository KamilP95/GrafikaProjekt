#pragma once
#include "Solid3D.h"
#include "Cone.h"
#include "Cylinder.h"
class Motor :
	public Solid3D
{
public:
	float Radius;
	float Height;

	Motor(float radius = 10, float height = 15) : Radius(radius), Height(height) {}

	virtual void Draw() override;

};

