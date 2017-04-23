#include "TrolleyUnderbody.h"

TrolleyUnderbody::TrolleyUnderbody(float x, float y, float z)
	: Complex3D(10, x, y, z)
{
	for (int i = 0; i < 10; i++)
	{
		_elements[i] = new Cylinder();
	}

	for (int i = 0; i < 4; i++)
	{
		_elements[i]->SetScale(5, 3, 5);
	}

	_elements[4]->SetScale(3, 12, 3);
	_elements[5]->SetScale(3, 12, 3);

	for (int i = 0; i < 4; i++)
	{
		_elements[i + 6]->SetScale(1, 8, 1);
	}


	for (int i = 0; i < 6; i++)
	{
		_elements[i]->SetRotation(0, 0, 90);
	}


	_elements[0]->SetPosition(-6, 0, -10);
	_elements[1]->SetPosition(-6, 0, 10);
	_elements[2]->SetPosition(6, 0, -10);
	_elements[3]->SetPosition(6, 0, 10);

	_elements[4]->SetPosition(0, 0, -10);
	_elements[5]->SetPosition(0, 0, 10);

	_elements[6]->SetPosition(-2, 3, -10);
	_elements[7]->SetPosition(2, 3, -10);
	_elements[8]->SetPosition(-2, 3, 10);
	_elements[9]->SetPosition(2, 3, 10);


	for (int i = 0; i < 4; i++)
	{
		_elements[i]->SetColor(0.3, 0.3, 0.3);
	}

	for (int i = 0; i < 2; i++)
	{
		_elements[i + 4]->SetColor(0.1, 0.1, 0.1);
	}

	for (int i = 0; i < 4; i++)
	{
		_elements[i + 6]->SetColor(0.3, 0.3, 0.3);
	}

}