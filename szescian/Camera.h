#pragma once
#include "Solid3D.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Cube.h"


class Camera :
	public Solid3D
{
private:
	Cylinder connection;
	Cylinder lens;
	Cylinder glass;
	Cube cover;
	Sphere diode;
public:
	Camera();

	float Height() const { return cover.Scale.Y / 2 + connection.Height; }

	virtual void Draw() override;
};

