#pragma once
#include"Solid3D.h"
#include"Orb.h"
class Shield :
	public Solid3D
{
public:
	float Radius;
	float Height;
	float Thickness;

	Shield(float radius = 30, float height = 15, float thickness = 3) : Radius(radius), Height(height), Thickness(thickness) {}

	virtual void Draw() override;
};

