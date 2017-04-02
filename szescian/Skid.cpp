#include "Skid.h"



Skid::Skid(float x, float y, float z) : Complex3D(3, x, y, z)
{
	_elements[0] = new Cylinder(); //base
	_elements[1] = new Cylinder(); //front leg
	_elements[2] = new Cylinder(); //back leg

	_elements[0]->SetScale(3, 50, 3);
	_elements[1]->SetScale(2, 25, 2);
	_elements[2]->SetScale(2, 25, 2);
				
	_elements[0]->SetColor(0.2, 0.2, 0.2);
	_elements[0]->SetRotation(90, 0, 0);
	_elements[0]->SetPosition(0, -_elements[1]->Height() / 2, 0);
				
	_elements[1]->SetColor(0.5, 0.5, 0.5);
	_elements[1]->SetRotation(30, 0, 0);
	_elements[1]->SetPosition(0, 0, -_elements[0]->Height() / 4);
				
	_elements[2]->SetColor(0.5, 0.5, 0.5);
	_elements[2]->SetRotation(-30, 0, 0);
	_elements[2]->SetPosition(0, 0, _elements[0]->Height() / 4);
}
