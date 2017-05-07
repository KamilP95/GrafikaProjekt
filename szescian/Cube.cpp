#include "Cube.h"



Cube::Cube(float x, float y, float z, float skewness)
{
	SetScale(x, y, z);
	skewness /= x;
	if (skewness < -0.5f)
		Skewness = -0.5f;
	else if (skewness > 0.5f)
		Skewness = 0.5f;
	else Skewness = skewness;
}

void Cube::Draw()
{
	glPushMatrix();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	Transform();
	glColor3fv(Color);

	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-0.5, -0.5, 0.5);
		glVertex3f(-0.5 + Skewness, 0.5, 0.5);
		glVertex3f(0.5, -0.5, 0.5);
		glVertex3f(0.5 - Skewness, 0.5, 0.5);
		glVertex3f(0.5, -0.5, -0.5);
		glVertex3f(0.5 - Skewness, 0.5, -0.5);
		glVertex3f(-0.5, -0.5, -0.5);
		glVertex3f(-0.5 + Skewness, 0.5, -0.5);
		glVertex3f(-0.5, -0.5, 0.5);
		glVertex3f(-0.5 + Skewness, 0.5, 0.5);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-0.5 + Skewness, 0.5, -0.5);
		glVertex3f(0.5 - Skewness, 0.5, -0.5);
		glVertex3f(-0.5 + Skewness, 0.5, 0.5);
		glVertex3f(0.5 - Skewness, 0.5, 0.5);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-0.5, -0.5, -0.5);
		glVertex3f(-0.5, -0.5, 0.5);
		glVertex3f(0.5, -0.5, -0.5);
		glVertex3f(0.5, -0.5, 0.5);
	glEnd();
	glPopMatrix();
}