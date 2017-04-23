#include "Mine.h"



Mine::Mine(float x, float y, float z)
	: Complex3D(5, x, y, z)
{
	for (int i = 0; i < 4; i++)
	{
		_elements[i] = new RailTracks();
	}
	_elements[4] = new MineShaft();

	for (int i = 0; i < 4; i++)
	{
		_elements[i]->SetScale(1.5, 1.5, 1.25);
	}

	_elements[4]->SetScale(1.5, 1, 0.5);

	_elements[0]->SetPosition(-25, -48, -12.5);
	_elements[1]->SetPosition(-25, -48, 12.5);
	_elements[2]->SetPosition(25, -48, -12.5);
	_elements[3]->SetPosition(25, -48, 12.5);
}
