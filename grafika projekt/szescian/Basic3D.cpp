#include "Basic3D.h"

Basic3D::Basic3D()
{
}

void Basic3D::Walec(float r, float height)
{
	glPushMatrix();
	glBegin(GL_TRIANGLE_STRIP);
	for (float i = 0; i <2 * PI; i += 0.1)
	{
		glVertex3f(sin(i)*r,  cos(i)*r,  height / 2);
		glVertex3f( sin(i)*r,  cos(i)*r,  -height / 2);
	}
	glEnd();

	glTranslatef(0.0, 0.0, -height / 2);
	Circle(r);
	glTranslatef(0.0, 0.0, height);
	Circle(r);
	glPopMatrix();
}

void Basic3D::StozekElipsa(float r, float height, float skosnosc)
{
	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0.0, 0.0, 0.0);
	for (float i = 0; i < 2 * PI; i += 0.1)
	{
		glVertex3f(sin(i)*r / skosnosc, cos(i)*r, height);
		glVertex3f(sin(i)*r / skosnosc, cos(i)*r, height);
	}
	glEnd();
	glTranslatef(0.0, 0.0, height);
	Elipse(r, skosnosc);
	glPopMatrix();
}

void Basic3D::Stozek(float r, float height)
{
	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0.0, 0.0, 0.0);
	for (float i = 0; i < 2 * PI; i += 0.1)
	{
		glVertex3f(sin(i)*r, cos(i)*r, height);
		glVertex3f(sin(i)*r, cos(i)*r, height);
	}
	glEnd();
	glTranslatef(0.0, 0.0, height);
	Circle(r);
	glPopMatrix();
}

Basic3D::~Basic3D()
{
}
