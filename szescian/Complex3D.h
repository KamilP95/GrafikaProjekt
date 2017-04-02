#pragma once
#include "Solid3D.h"
class Complex3D :
	public Solid3D
{
protected:
	Solid3D** _elements;
	int _elementsCount;
public:
	Complex3D(int elementsCount, float x = 1, float y = 1, float z = 1)
	: _elementsCount(elementsCount)
	{
		_elements = new Solid3D*[_elementsCount];
		SetScale(x, y, z);
	}
	virtual ~Complex3D()
	{
		for (int i = 0; i < _elementsCount; ++i)
			delete _elements[i];
		delete[] _elements;
	}

	virtual void Draw() override 
	{
		glPushMatrix();

		Transform();

		for (int i = 0; i < _elementsCount; ++i)
			_elements[i]->Draw();

		glPopMatrix();
	}
};

