#pragma once
#include "Solid3D.h"
class Orb :
	public Solid3D
{
public:
	float Ratio;
	float Accuracy;

	Orb(float ratio = 1.0, float accuracy = 50) : Ratio(ratio), Accuracy(accuracy)  {}
	virtual ~Orb() {}

	virtual void Draw() override;
};

