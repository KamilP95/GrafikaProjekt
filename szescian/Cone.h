#pragma once
#include "Solid3D.h"
class Cone :
	public Solid3D
{
public:
	int Accuracy;

	Cone(int accuracy = 50) : Accuracy(accuracy) {}

	virtual void Draw() override;
};

