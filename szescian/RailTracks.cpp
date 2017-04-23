#include "RailTracks.h"

RailTracks::RailTracks(float x, float y, float z)
	: Complex3D(4, x, y, z)
{
	for (int i = 0; i < 4; i++)
		_elements[i] = new Cube();

	_elements[0]->SetScale(14, 3, 5);
	_elements[1]->SetScale(14, 3, 5);
	_elements[2]->SetScale(2, 3, 20);
	_elements[3]->SetScale(2, 3, 20);

	_elements[0]->SetColor(0.5, 0.3, 0);
	_elements[1]->SetColor(0.5, 0.3, 0);
	_elements[2]->SetColor(0.1, 0.1, 0.1);
	_elements[3]->SetColor(0.1, 0.1, 0.1);

	_elements[0]->SetPosition(0, 0, -5);
	_elements[1]->SetPosition(0, 0, 5);
	_elements[2]->SetPosition(-4, 3, 0);
	_elements[3]->SetPosition(4, 3, 0);
}