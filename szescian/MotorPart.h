#pragma once
#include"Solid3D.h"
#include"Prop.h"
#include"Motor.h"
#include"Shield.h"
#include"Grip.h"

class MotorPart :
	public Solid3D
{
public:
	float Radius;
	float Height;

	MotorPart(float radius = 30, float height = 15) : Radius(radius), Height(height) {}

	virtual void Draw() override;
};

