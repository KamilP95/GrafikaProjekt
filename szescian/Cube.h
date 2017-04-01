#pragma once
#include "Solid3D.h"
class Cube :
	public Solid3D
{
public:
	Cube(float x, float y, float z);
	
	virtual void Draw() override;
};

