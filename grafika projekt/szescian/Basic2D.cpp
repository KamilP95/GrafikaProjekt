#include "Basic2D.h"


Basic2D::Basic2D()
{
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

void Basic2D::Rectangle(float lenght, float widght)
{
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0, 0, 0);
	glVertex3f(lenght, 0, 0);
	glVertex3f(lenght, widght, 0);
	glVertex3f(0, widght, 0);
	glEnd();
}

void Basic2D::Square(float a)
{
	Rectangle(a, a);
}

void Basic2D::Trapeze(float lenght1, float lenght2, float widght)
{
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0, 0, 0);
	glVertex3f(lenght1, 0, 0);
	glVertex3f((lenght1 + lenght2) / 2, widght, 0);
	glVertex3f((lenght1 - lenght2) / 2, widght, 0);
	glEnd();
}


Basic2D::~Basic2D()
{
}
