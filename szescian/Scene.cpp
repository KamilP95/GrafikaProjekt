#include "Scene.h"


Scene::Scene()
{
}

void Scene::Draw(SceneElement& scene, Vector3 trans, float angle)
{
	scene.SetPosition(trans.X, 50, trans.Z);
	scene.SetRotation(0, angle, 0);
	scene.Draw();
}

void Scene::Draw(SceneElement & prev, SceneElement & scene)
{
	Vector3 position = prev.GetPosition();
	float rotation = prev.GetRotation().Y + prev.GetAngle();
	scene.SetPosition(position.X - 50 * sin(rotation * PI / 180), position.Y, position.Z - 50 * cos(rotation * PI / 180));
	scene.SetRotation(0, rotation, 0);
	scene.Draw();
}

void Scene::Draw(Drone & drone, Vector3 trans, Vector3 rot)
{
	drone.SetPosition(0, trans.Y, /*-50*/ 0);
	drone.SetRotation(rot.X, rot.Y, 0);
	drone.SetScale(0.15, 0.15, 0.15);
	drone.Draw();
}