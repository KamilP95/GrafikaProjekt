#pragma once
#include "Cube.h"
#include "SceneElement.h"
#include "Mine.h"
#include "Complex3D.h"

class Scene :
	public Complex3D
{
public:
	float angle;
	float GetAngle() { return angle; }
	Scene(int type, float x = 1, float y = 1, float z = 1);
};

