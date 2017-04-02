#include "Arm.h"


Arm::Arm(float x, float y, float z, float skewness)
	: Complex3D(3, x, y, z), Skewness(skewness)
{
	_elements[0] = new Cube(1, 1 / 3.0f, 1);//In
	_elements[1] = new Cube(1, 1 / 3.0f, 1, Skewness / x * 2);//Upper Out
	_elements[2] = new Cube(1, 1 / 3.0f, 1, Skewness / x * 2);//Lower Out

	_elements[0]->SetColor(0.1, 0.1, 0.1);

	_elements[1]->SetRotation(0, 90, 0);
	_elements[1]->SetPosition(0, 1 / 3.0f, 0);
	_elements[1]->SetColor(0.7, 0.7, 0.7);

	_elements[2]->SetRotation(180, 90, 0);
	_elements[2]->SetPosition(0, -1 / 3.0f, 0);
	_elements[2]->SetColor(0.7, 0.7, 0.7);
}
