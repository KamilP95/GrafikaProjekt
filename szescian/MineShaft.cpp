#include "MineShaft.h"





MineShaft::MineShaft(float x, float y, float z)
	: Complex3D(5, x, y, z)
{
	for (int i = 0; i < 3; i++)
		_elements[i] = new StoneWall(15, -2.5, 2.5);
	_elements[3] = new StoneWall(20);
	_elements[4] = new MineStamp();

	_elements[0]->SetRotation(0, -90, 0);
	_elements[0]->SetPosition(50, 0, 0);

	_elements[1]->SetRotation(0, 90, 0);
	_elements[1]->SetPosition(-50, 0, 0);

	_elements[2]->SetRotation(90, 0, 0);
	_elements[2]->SetPosition(0, 50, 0);

	_elements[3]->SetRotation(-90, 0, 0);
	_elements[3]->SetPosition(0, -50, 0);

	_elements[4]->SetPosition(0, 0, 50);
}
