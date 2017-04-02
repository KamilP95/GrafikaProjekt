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
	Motor motor;
	Prop prop;
	Shield shield;
	Grip grip;

	MotorPart(float radius = 30, float height = 15);

	virtual void Draw() override;
};

