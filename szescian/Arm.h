#pragma once
#include"Complex3D.h"
#include"Cube.h"


class Arm :
	public Complex3D
{
public:
	float Skewness;

	Arm(float x = 60, float y = 10, float z = 15, float skewness = 5);

};

