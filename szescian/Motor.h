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
	Cylinder Down;
	Cone Up;

	Motor(float radius = 10, float height = 15);

	virtual void Draw() override;

};

