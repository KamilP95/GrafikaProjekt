#pragma once
#include"Solid3D.h"
#include"Cone.h"
class Prop :
	public Solid3D
{
public:
	float Radius;
	float Width;
	Cone Part;

	Prop(float radius = 20, float width = 5);

	virtual void Draw() override;
};

