#include "SceneElement.h"

SceneElement::SceneElement(int type, float x, float y, float z)
	: Complex3D(2, x, y, z)
{
	_elements[0] = new Mine();
	_elements[1] = new Trolley();

	
	if (type == 1)
	{
		_elements[1]->SetPosition(-25, -30, 0);
	}
	else if (type == 2)
	{
		_elements[1]->SetPosition(25, -30, 0);
	}
}
