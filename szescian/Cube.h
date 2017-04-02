#pragma once
#include "Solid3D.h"
class Cube :
	public Solid3D
{
public:
	float Skewness;

	Cube(float x = 10, float y = 10, float z = 10, float skewness = 0);
	
	virtual void Draw() override;
};

