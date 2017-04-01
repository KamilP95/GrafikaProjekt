#include "Orb.h"


void Orb::Draw()
{
	glBegin(GL_TRIANGLE_STRIP);
	for (float i = 0; i < 2 * PI + 0.1; i += 0.1)
	{
		glVertex3f(sin(i) * Radius1, cos(i) * Radius1, 0.0f);
		glVertex3f(sin(i) * Radius2, cos(i) * Radius2, Height);
	}
	glEnd();
}
