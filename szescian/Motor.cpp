#include "Motor.h"

Motor::Motor(float x, float y, float z)
	: Complex3D(2, x, y, z)
{
	_elements[0] = new Cylinder; //down
	_elements[1] = new Cone; //up

	_elements[0]->SetScale(1, 0.5, 1);
	_elements[1]->SetScale(1, 0.5, 1);
	
	_elements[0]->SetPosition(0, -0.25, 0);
	_elements[0]->SetColor(0.3, 0.3, 0.3);

	_elements[1]->SetPosition(0, 0.25, 0);
	_elements[1]->SetColor(0.3, 0.3, 0.3);
}


