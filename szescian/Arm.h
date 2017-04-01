#pragma once
#include"Solid3D.h"
#include"Cube.h"
class Arm :
	public Solid3D
{
public:
	float Lenght;
	float Width;
	float Height;
	float Skewness;
	Cube In;
	Cube Out;

	Arm(float lenght = 60, float height = 10, float width = 15, float skewness = 5);

	virtual void Draw() override;

};

