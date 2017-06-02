#pragma once
#include "SceneElement.h"
#include "Drone.h"

class Scene
{
public:
	Scene();
	void SetPR(SceneElement& scene, Vector3 trans, float nextAngle);
	void SetPR(SceneElement& prev, SceneElement& scene);
	void Draw(Drone & drone, Vector3 trans, Vector3 rot);
	int CheckWallsCollision(SceneElement& scene, Vector3 dronePosition);
	int CheckTrolleyCollision(Vector3 trolleyPosition, Vector3 dronePosition);
	Vector3 GetTrolleyPosition(SceneElement & scene, int sceneType);
	int CheckCollision(SceneElement & scene, Vector3 dronePosition);
};

