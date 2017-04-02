#pragma once
#include "Solid3D.h"
class Cylinder :
	public Solid3D
{
public:
	int Accuracy;
	
	Cylinder(int accuracy = 50) : Accuracy(accuracy) {}
	
	virtual void Draw() override;
};

