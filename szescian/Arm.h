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

	Arm(float lenght = 60, float height = 10, float width = 15, float skewness = 5) :Lenght(lenght), Height(height), Width(width), Skewness(skewness) {}

	virtual void Draw() override;

};

