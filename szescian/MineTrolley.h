#pragma once
#include "Complex3D.h"
#include "Mine.h"
#include "Trolley.h"

class MineTrolley :
	public Complex3D
{
public:
	MineTrolley(int type = 1, float x = 1, float y = 1, float z = 1);
};

