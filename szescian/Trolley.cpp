#include "Trolley.h"


Trolley::Trolley(float x, float y, float z)
	: Complex3D(2, x, y, z)
{
	_elements[0] = new TrolleyUnderbody;
	_elements[1] = new TrolleyBody;

	_elements[0]->SetPosition(0, -7, 0);
}
