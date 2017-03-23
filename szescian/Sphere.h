#pragma once
#include "Solid3D.h"
class Sphere :
	public Solid3D
{
public:
	float Radius;

	Sphere(float radius = 10) : Radius(radius) {}
	virtual ~Sphere() {}

	virtual void Draw() override;
};

