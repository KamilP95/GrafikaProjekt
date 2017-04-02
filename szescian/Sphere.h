#pragma once
#include "Solid3D.h"

class Sphere :
	public Solid3D
{
public:
	float Radius;
	int Accuracy;

	Sphere(int accuracy = 50) : Accuracy(accuracy) {}
	virtual ~Sphere() {}

	virtual void Draw() override;
};

