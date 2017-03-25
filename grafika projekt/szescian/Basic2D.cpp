#include "Basic2D.h"


Basic2D::Basic2D()
{
	lenght = 0;
	widght = 0;
	r = 0;
}

void Basic2D::Circle (float r)
{
	glBegin(GL_TRIANGLE_FAN);
	for (float i = 0; i < 2 * PI; i += 0.1)
	{
		glVertex3f(sin(i)*r, cos(i)*r, 0.0f);
		glVertex3f(sin(i)*r, cos(i)*r, 0.0f);
	}
	glEnd();
}

void Basic2D::Elipse(float r, float skosnosc)
{
	glBegin(GL_TRIANGLE_FAN);
	for (float i = 0; i < 2 * PI; i += 0.1)
	{
		glVertex3f(sin(i)*r / skosnosc, cos(i)*r, 0.0);
		glVertex3f(sin(i)*r / skosnosc, cos(i)*r, 0.0);
	}
	glEnd();
}


Basic2D::~Basic2D()
{
}
