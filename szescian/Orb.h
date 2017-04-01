#pragma once
#include "Solid3D.h"
class Orb :
	public Solid3D
{
public:
	float Radius1;
	float Radius2;
	float Height;

	Orb(float radius1 = 20, float radius2 = 10, float height = 20) : Radius1(radius1), Radius2(radius2), Height(height) {}
	virtual ~Orb() {}

	virtual void Draw() override;
};

