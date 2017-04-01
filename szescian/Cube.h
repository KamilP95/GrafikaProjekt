#pragma once
#include "Solid3D.h"
class Cube :
	public Solid3D
{
public:
	float Skewness;

	Cube(float x, float y, float z, float skewness = 0);
	
	virtual void Draw() override;
};

