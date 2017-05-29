#pragma once
#include "Mine.h"
#include "Complex3D.h"
class Scene :
	public Complex3D
{
public:
	float Ztrans = 0;
	Scene(float x = 1, float y = 1, float z = 1);
};
