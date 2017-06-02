#include "MineShaftLeft.h"


MineShaftLeft::MineShaftLeft(float x, float y, float z)
	: Complex3D(4, x, y, z)
{
	for (int i = 0; i < 3; i++)
		_elements[i] = new StoneWall(15, -2.5, 2.5, 1.3, 1.5, 1.5);
	_elements[3] = new MineStamp();

	_elements[0]->SetRotation(0, -70, 0);
	_elements[0]->SetPosition(65, 0, 0);

	_elements[1]->SetRotation(90, 0, 0);
	_elements[1]->SetPosition(0, 50, 0);

	_elements[2]->SetRotation(-90, 0, 0);
	_elements[2]->SetPosition(0, -50, 0);

	_elements[3]->SetPosition(0, 0, 25);
	_elements[3]->SetScale(1.5, 1, 0.5);
}
