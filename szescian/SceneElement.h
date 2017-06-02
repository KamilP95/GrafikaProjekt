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
	int type;

	SceneElement(float x = 1, float y = 1, float z = 1);
	float GetAngle() { return angle; }
	int GetType() { return type; }
};
