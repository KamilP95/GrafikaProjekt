#include "Shield.h"


Shield::Shield(float x, float y, float z, float thickness)
	: Complex3D(4, x, y, z)
{
	_elements[0] = new Orb;//In
	_elements[1] = new Orb;//Out
	_elements[2] = new Orb(x / (x + thickness));//Up
	_elements[3] = new Orb(x / (x + thickness));//Down

	_elements[0]->SetScale(1, 1, 1);
	_elements[1]->SetScale((x + thickness) / x, 1 / 3.0f, (z + thickness) / z);
	_elements[2]->SetScale((x + thickness) / x, 1 / 3.0f, (z + thickness) / z);
	_elements[3]->SetScale((x + thickness) / x, 1 / 3.0f, (z + thickness) / z);

	_elements[0]->SetColor(0.65, 0.65, 0.65);

	_elements[1]->SetColor(0.1, 0.1, 0.1);

	_elements[2]->SetColor(0.7, 0.7, 0.7);
	_elements[2]->SetPosition(0, 1 / 3.0f, 0);

	_elements[3]->SetColor(0.7, 0.7, 0.7);
	_elements[3]->SetPosition(0, -1 / 3.0f, 0);
	_elements[3]->SetRotation(180, 0, 0);
}
