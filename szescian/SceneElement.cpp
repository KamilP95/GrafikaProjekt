#include "SceneElement.h"

SceneElement::SceneElement(float x, float y, float z)
	: Complex3D(1, x, y, z)
{
	//type = Random::NextF(1, 4);
	type = Random::NextF(1, 15);
	angle = 0;
	switch (type)
	{
	case 1:
		_elements[0] = new MineTrolley(1);
		break;
	case 2:
		_elements[0] = new MineTrolley(2);
		break;
		
	case 4:
		_elements[0] = new MineShaftLeft;
		angle = 40;
		break;
	case 5:
		_elements[0] = new MineShaftRight;
		angle = -40;
		break;
	default:
		_elements[0] = new Mine;
		break;
	}
}

