#include "Scene.h"

Scene::Scene(float x, float y, float z)
	: Complex3D(5, x, y, z)
{
	for (int i = 0; i < 5; i++)
	{
		_elements[i] = new Mine();
	}

	for (int i = 0; i < 5; i++)
	{
		_elements[i]->SetPosition(0, 50, -50 * i - Ztrans + 100);
	}
}
