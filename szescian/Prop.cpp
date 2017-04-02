#include "Prop.h"


Prop::Prop(float x, float y, float z)
	: Complex3D(2, x, y, z)
{
	_elements[0] = new Cone;
	_elements[1] = new Cone;

	_elements[0]->SetScale(1, 0.5, 1);
	_elements[1]->SetScale(1, 0.5, 1);

	_elements[0]->SetRotation(-85, 0, 5);
	_elements[0]->SetPosition(0, 0, 0.25);
	_elements[0]->SetColor(0.1, 0.1, 0.1);

	_elements[1]->SetRotation(85, 0, -5);
	_elements[1]->SetPosition(0, 0, -0.25);
	_elements[1]->SetColor(0.1, 0.1, 0.1);
}

void Prop::Rotate(float speed)
{
	Rotation = Rotation + Vector3(0, speed, 0);
}


