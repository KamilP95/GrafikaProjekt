#pragma once
#include "Complex3D.h"
#include "MotorPart.h"
#include "Arm.h"

class MotorArm :
	public Complex3D
{
	MotorPart* motor;
public:
	MotorArm(float x = 1, float y = 1, float z = 1);

	void RotateProp(float speed) const;
};

