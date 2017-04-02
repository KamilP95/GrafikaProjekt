#pragma once
#include "Solid3D.h"
#include "Cylinder.h"

class Skid :
	public Solid3D
{
private:
	Cylinder base;
	Cylinder connection;
public:
	Skid();

	float Height() const { return sinf(70 * 180 / PI) * connection.Height; }

	virtual void Draw() override;
};

