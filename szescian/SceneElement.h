#pragma once
#include "Mine.h"
#include "MineTrolley.h"
#include "MineShaftLeft.h"
#include "MineShaftRight.h"
#include "Complex3D.h"

class SceneElement :
	public Complex3D
{
public:
	float angle;

	SceneElement(int type = 1, float x = 1, float y = 1, float z = 1);
	float GetAngle() { return angle; }
};
