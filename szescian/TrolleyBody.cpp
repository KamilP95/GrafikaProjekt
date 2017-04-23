#include "TrolleyBody.h"



TrolleyBody::TrolleyBody(float x, float y, float z)
	: Complex3D(5, x, y, z)
{
	for (int i = 0; i < 3; i++)
	{
		_elements[i] = new Cube();
	}

	for (int i = 0; i < 2; i++)
	{
		_elements[i + 3] = new Cube(10, 10, 10, 0.2);
	}

	_elements[0]->SetScale(18, 2, 26);
	_elements[1]->SetScale(18, 2, 10);
	_elements[2]->SetScale(18, 2, 10);
	_elements[3]->SetScale(10, 2, 26);
	_elements[4]->SetScale(10, 2, 26);

	_elements[1]->SetRotation(-90, 0, 0);
	_elements[2]->SetRotation(90, 0, 0);
	_elements[3]->SetRotation(0, 0, 90);
	_elements[4]->SetRotation(0, 0, 90);

	_elements[1]->SetPosition(0, 5, 13);
	_elements[2]->SetPosition(0, 5, -13);
	_elements[3]->SetPosition(-9, 5, 0);
	_elements[4]->SetPosition(9, 5, 0);

	_elements[0]->SetColor(0, 0, 0);
	_elements[1]->SetColor(0.4, 0.4, 0.4);
	_elements[2]->SetColor(0.4, 0.4, 0.4);
	_elements[3]->SetColor(0.6, 0.6, 0.6);
	_elements[4]->SetColor(0.6, 0.6, 0.6);

}
