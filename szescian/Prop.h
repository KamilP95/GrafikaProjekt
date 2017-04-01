#pragma once
#include"Solid3D.h"
#include"Cone.h"
class Prop :
	public Solid3D
{
public:
	float Radius;
	float Width;

	Prop(float radius = 20, float width = 5) : Radius(radius), Width(width) {}

	virtual void Draw() override;
};

