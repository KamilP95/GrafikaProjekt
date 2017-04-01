#pragma once
#include "Basic3D.h"

class Shield :
	Basic3D
{
public:
	Shield();
	void Draw(float r1, float r2, float height);
	void Uchwyt(float r1, float r2, float height);
	~Shield();
};

