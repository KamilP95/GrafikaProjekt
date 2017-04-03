#include "MotorArm.h"



MotorArm::MotorArm(float x, float y, float z)
	: Complex3D(2, x, y, z)
{
	motor = new MotorPart(0.5, 0.5, 0.5);
	_elements[0] = motor;
	_elements[1] = new Arm(40,7.5,10,2.5);

	_elements[0]->SetPosition(55, 10, 0);
	_elements[0]->SetRotation(0, 29.5, 0);

	_elements[1]->SetPosition(20, 5, 0);
	_elements[1]->SetRotation(0, 0, 15);
}

void MotorArm::RotateProp(float speed) const
{
	motor->RotateProp(speed);
}


