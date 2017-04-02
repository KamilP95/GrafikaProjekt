#include "MotorPart.h"

MotorPart::MotorPart(float x, float y, float z )
	: Complex3D(4, x, y, z)
{
	/*motor = Motor(Radius / 4, Height);
	prop = Prop(Radius - 5);
	shield = Shield(Radius, Height);
	grip = Grip(Radius);*/
	_elements[0] = new Motor();
	_elements[1] = new Prop(5, 1, 45);
	_elements[2] = new Shield(30,20,30);
	_elements[3] = new Grip(30, 1);

	_elements[1]->SetPosition(0, 5, 0);

	_elements[3]->SetColor(0.5, 0.5, 0.5);
	_elements[3]->SetPosition(0, -5, 0);

	_prop = (Prop*)_elements[1];
}

void MotorPart::RotateProp(float speed)
{
	_prop->Rotate(speed);
}


