#pragma once
#include"Complex3D.h"
#include"Prop.h"
#include"Motor.h"
#include"Shield.h"
#include"Grip.h"

class MotorPart :
	public Complex3D
{
private:
	Prop* _prop;
public:
	
	MotorPart(float x = 1, float y = 1, float z = 1);

	void RotateProp(float speed);
};

