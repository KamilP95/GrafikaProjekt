#pragma once
#include "Complex3D.h"
#include "MotorArm.h"
#include "Sphere.h"
#include "Skid.h"
#include "Camera.h"

class Drone :
	public Complex3D
{
public:
	Drone(float x = 1, float y = 1, float z = 1);
	
	void RotateProps(float speed) const;
};

