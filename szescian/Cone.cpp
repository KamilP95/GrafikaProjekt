#include "Cone.h"


void Cone::Draw()
{
	glColor3fv(Color);

	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0.0f, 0.0f, Height / 2);
	for (float i = 0; i > -2 * PI - 0.1; i -= 0.1)
	{
		glVertex3f(sin(i) * Radius * Scale.X, cos(i) * Radius * Scale.Y, -Height / 2 * Scale.Z);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0.0f, 0.0f, -Height / 2);
	for (float i = 0; i < 2 * PI + 0.1; i += 0.1)
	{
		glVertex3f(sin(i) * Radius * Scale.X, cos(i) * Radius * Scale.Y, -Height / 2 * Scale.Z);
	}
	glEnd();
}
