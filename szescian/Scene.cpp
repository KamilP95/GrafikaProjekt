#include "Scene.h"


Scene::Scene()
{
}

void Scene::SetPR(SceneElement& scene, Vector3 trans, float angle)
{
	scene.SetPosition(trans.X, 50, trans.Z);
	scene.SetRotation(0, angle, 0);
}

void Scene::SetPR(SceneElement & prev, SceneElement & scene)
{
	Vector3 position = prev.GetPosition();
	float rotation = prev.GetRotation().Y + prev.GetAngle();
	scene.SetPosition(position.X - 50 * sin(rotation * PI / 180), position.Y, position.Z - 50 * cos(rotation * PI / 180));
	scene.SetRotation(0, rotation, 0);
}

void Scene::Draw(Drone & drone, Vector3 trans, Vector3 rot)
{
	drone.SetPosition(0, trans.Y, 0);
	drone.SetRotation(rot.X, rot.Y, 0);
	drone.SetScale(0.15, 0.15, 0.15);
	drone.Draw();
}

int Scene::CheckWallsCollision(SceneElement& scene, Vector3 dronePosition)
{
	int r = 60;
	float x = scene.GetPosition().X - dronePosition.X;
	float z = scene.GetPosition().Z - dronePosition.Z;
	if (x*x + z*z < r*r)
	{
		return 1;
	}
	return 0;
}

int Scene::CheckTrolleyCollision(Vector3 trolleyPosition, Vector3 dronePosition)
{
	int r = 18;
	float x = trolleyPosition.X - dronePosition.X;
	float z = trolleyPosition.Z - dronePosition.Z;
	if (x*x + z*z < r*r && dronePosition.Y < trolleyPosition.Y + 15)
	{
		return -10;
	}
	return 0;
}

Vector3 Scene::GetTrolleyPosition(SceneElement& scene, int sceneType)
{
	Vector3 trolleyPos;
	trolleyPos.Y = 20;
	if (sceneType == 1)
	{
		trolleyPos.X = scene.GetPosition().X - 25 * cos(scene.GetRotation().Y * PI / 180);
		trolleyPos.Z = scene.GetPosition().Z + 25 * sin(scene.GetRotation().Y * PI / 180);
	}
	else
	{
		trolleyPos.X = scene.GetPosition().X + 25 * cos(scene.GetRotation().Y * PI / 180);
		trolleyPos.Z = scene.GetPosition().Z - 25 * sin(scene.GetRotation().Y * PI / 180);
	}
	return trolleyPos;
}

int Scene::CheckCollision(SceneElement& scene, Vector3 dronePosition)
{
	int i=0, j=0;
	i = CheckWallsCollision(scene, dronePosition);
	if (scene.GetType() == 1 || scene.GetType() == 2)
	{
		Vector3 V = GetTrolleyPosition(scene, scene.GetType());
		j = CheckTrolleyCollision(V, dronePosition);
	}
	return i + j;
}