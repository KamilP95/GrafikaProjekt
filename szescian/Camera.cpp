#include "Camera.h"



Camera::Camera(float x, float y, float z)
	: Complex3D(5, x, y, z)
{
	_elements[0] = new Cylinder;//connection
	_elements[1] = new Cylinder;//lens 
	_elements[2] = new Cylinder;//glass
	_elements[3] = new Cube;//cover
	_elements[4] = new Sphere;//diode

	_elements[0]->SetScale(5, 5, 5);
	_elements[1]->SetScale(4, 5, 4);
	_elements[2]->SetScale(3, 0.1, 3);
	_elements[3]->SetScale(15, 15, 20);
	

	_elements[0]->SetPosition(0, _elements[0]->Height() / 2 + _elements[3]->Height() / 2, 0);
	_elements[0]->SetColor(0.3, 0.3, 0.3);

	_elements[1]->SetRotation(90, 0, 0);
	_elements[1]->SetPosition(0, 0, _elements[1]->Height() / 2 + _elements[3]->Length() / 2);
	_elements[1]->SetColor(0, 0, 0);

	_elements[2]->SetRotation(90, 0, 0);
	_elements[2]->SetPosition(0, 0, 0.05 + _elements[1]->Height() + _elements[3]->Length() / 2);
	_elements[2]->SetColor(0.8, 0.8, 1);

	_elements[3]->SetColor(0.1, 0.1, 0.1);

	_elements[4]->SetPosition(0.3 * _elements[3]->Width(), 0.3 * _elements[3]->Height(), _elements[3]->Length() / 2);
	_elements[4]->SetColor(1, 0, 0);
}

