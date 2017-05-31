#include "Scene.h"


Scene::Scene(int type, float x, float y, float z)
	: Complex3D(1, x, y, z)
{
	angle = 0;
	switch (type)
	{
	case 1:
		_elements[0] = new SceneElement(1);
		break;
	case 2:
		_elements[0] = new SceneElement(2);
		break;
	case 3:
		_elements[0] = new Mine;
		break;
	case 4:
		_elements[0] = new Cube;
		angle = -30;
		break;
	case 5:
		_elements[0] = new Cube;
		angle = 30;
		break;
	default:
		break;
	}
}
