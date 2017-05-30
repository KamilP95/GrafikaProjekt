#pragma once
#include "Mine.h"
#include "Trolley.h"
#include "Complex3D.h"

class SceneElement :
	public Complex3D
{
public:
	SceneElement(int type = 1, float x = 1, float y = 1, float z = 1);
};
