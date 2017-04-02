#pragma once
#include "Complex3D.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Cube.h"


class Camera :
	public Complex3D
{
private:
	Cylinder connection;
	Cylinder lens;
	Cylinder glass;
	Cube cover;
	Sphere diode;
public:
	Camera(float x = 1, float y = 1, float z = 1);
};

