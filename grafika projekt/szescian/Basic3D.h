#pragma once
#include "Basic2D.h"

class Basic3D :
	Basic2D
{
public:
	Basic3D();
	void Walec(float r, float height);
	void StozekElipsa(float height, float r, float skosnosc);
	void Stozek(float r, float height);
	void Cuboid(float lenght, float widght, float height);
	void Cube(float lenght);
	void Orb(float r1, float r2, float height);
	~Basic3D();
};

