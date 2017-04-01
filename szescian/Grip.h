#pragma once
#include"Solid3D.h"
#include"Cylinder.h"
class Grip :
	public Solid3D
{
public:
	float RadiusSmall;
	float RadiusBig;

	Grip(float radiusBig = 30, float radiusSmall = 3) : RadiusSmall(radiusSmall), RadiusBig(radiusBig) {}

	virtual void Draw() override;

};

