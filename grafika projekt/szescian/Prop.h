#pragma once
#include "Basic3D.h"

class Prop :
	Basic3D
{
public:
	Prop();
	void Draw(float r, float height, float skosnosc);
	void Rotate(float r, float height, float skosnosc, float v);
	~Prop();
};

