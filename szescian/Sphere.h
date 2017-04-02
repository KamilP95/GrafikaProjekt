#pragma once
#include "Solid3D.h"

class Sphere :
	public Solid3D
{
public:
	int Accuracy;
	float Radius;

	Sphere(int accuracy = 50) : Accuracy(accuracy) {}
	virtual ~Sphere() {}

	virtual void Draw() override;
};

