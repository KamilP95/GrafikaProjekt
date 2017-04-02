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
	Orb In;
	Orb Out;
	Orb Up;
	Orb Down;

	Shield(float radius = 30, float height = 15, float thickness = 3);

	virtual void Draw() override;
};

