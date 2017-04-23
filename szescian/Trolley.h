#pragma once
#include "Cylinder.h"
#include "Cube.h"
#include "TrolleyBody.h"
#include "TrolleyUnderbody.h"
#include "Complex3D.h"

class Trolley :
	public Complex3D
{
public:
	Trolley(float x = 1, float y = 1, float z = 1);
};

