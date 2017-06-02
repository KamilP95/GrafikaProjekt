#include "Drone.h"



Drone::Drone(float x, float y, float z)
	: Complex3D(10, x, y, z)
{
	_elements[0] = new Sphere(100);
	_elements[1] = new Skid;
	_elements[2] = new Skid;
	_elements[3] = new Camera;
	for (int i = 4; i < 10; i++)
		_elements[i] = new MotorArm;
		

	_elements[0]->SetScale(40, 15, 50);
	_elements[1]->SetScale(1,1,1.5);
	_elements[2]->SetScale(1,1,1.5);
	_elements[3]->SetScale(0.7, 0.7, 0.7);
	

	_elements[1]->SetPosition(20, -20, 0);
	_elements[2]->SetPosition(-20, -20, 0);

	_elements[1]->SetRotation(0, 0, 20);
	_elements[2]->SetRotation(0, 0, -20);

	_elements[3]->SetPosition(0, -23, 0);

	int j = -1;
	for (int i = 4; i < 7; i++)
	{
		_elements[i]->SetPosition((j == 0) ? 35 : 25, 0, j * 30);
		_elements[i + 3]->SetPosition((j == 0) ? -35 : -25, 0, j * 30);

		_elements[i]->SetRotation(0, -j * 45, 0);
		_elements[i + 3]->SetRotation(0, 180 + j * 45, 0);
		
		++j;
	}

	_elements[0]->SetColor(0.9,0.9,0.9);
	_elements[0]->SetColor2(0.1,0.1,0.1);

	SetTexture("Bitmapy\\drewno.bmp");
	Random::InitializeSeed();
}

void Drone::RotateProps(float speed) const
{
	int j = 1;
	for(int i = 4; i < 10; i++)
	{
		static_cast<MotorArm*>(_elements[i])->RotateProp(speed * j);
		j *= -1;
	}
}
