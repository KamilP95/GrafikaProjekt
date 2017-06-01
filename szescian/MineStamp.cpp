#include "MineStamp.h"



MineStamp::MineStamp(float x, float y, float z)
	: Complex3D(5, x, y, z)
{
	for (int i = 0; i < _elementsCount; i++)
	{
		_elements[i] = new Cylinder(6);
		_elements[i]->SetColor(102.0f / 256, 51.0f / 256, 0);
		_elements[i]->SetScale(5, 92, 5);
	}
	_elements[0]->SetScale(5, 100, 5);
	_elements[0]->SetRotation(0, 0, 90);
	_elements[0]->SetPosition(0, 45, 0);

	_elements[1]->SetPosition(45, -4, 0);
	_elements[2]->SetPosition(-45, -4, 0);

	_elements[3]->SetScale(3, 35, 3);
	_elements[3]->SetRotation(0, 0, 45);
	_elements[3]->SetPosition(30, 30, 0);

	_elements[4]->SetScale(3, 35, 3);
	_elements[4]->SetRotation(0, 0, -45);
	_elements[4]->SetPosition(-30, 30, 0);

	//SetTexture("Bitmapy\\drewno.bmp");

	for (int i = 0; i < _elementsCount; i++)
	{
		_elements[i]->SetTexture();
	}
}
