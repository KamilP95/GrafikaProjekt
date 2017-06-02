#pragma once
#include "SceneElement.h"
#include "Drone.h"

class Scene
{
public:
	Vector3 trans;

	Scene();
	void Draw(SceneElement& scene, Vector3 trans, float nextAngle);
	void Draw(SceneElement& prev, SceneElement& scene);
	void Draw(Drone & drone, Vector3 trans, Vector3 rot);
};

