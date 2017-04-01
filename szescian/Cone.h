#pragma once
#include "Solid3D.h"
class Cone :
	public Solid3D
{
public:
	float Radius;
	float Height;

	Cone(float radius = 5, float height = 20) : Radius(radius), Height(height) {}

	virtual void Draw() override;

};

