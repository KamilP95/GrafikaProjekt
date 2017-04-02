#pragma once
#include"Complex3D.h"
#include"Cone.h"
class Prop :
	public Complex3D
{
public:
	Prop(float x = 20, float y = 5, float z = 20);

	void Rotate(float speed);
};

