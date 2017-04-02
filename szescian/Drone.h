#pragma once
#include "Solid3D.h"
#include "MotorPart.h"
#include "Arm.h"
#include "Sphere.h"
#include "Skid.h"
#include "Camera.h"

class Drone :
	public Solid3D
{
	Sphere cover;
	Arm arm;
	MotorPart motor;
	Skid skid;
	Camera camera;
	Cylinder antenna;
public:
	Drone();
	
	virtual void Draw() override;
};

