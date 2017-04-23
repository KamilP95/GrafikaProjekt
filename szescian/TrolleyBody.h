#pragma once
#include "Cylinder.h"
#include "Cube.h"
#include "Complex3D.h"

class TrolleyBody :
	public Complex3D
{
public:
	TrolleyBody(float x = 1, float y = 1, float z = 1);
};