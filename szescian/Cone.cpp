#include "Cone.h"


void Cone::Draw()
{
	float step = PI / Accuracy * 2;
	glPushMatrix();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	Transform();

	glColor3fv(Color);
	if (TextureOn) glEnable(GL_TEXTURE_2D);

	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0.0f, 0.5f, 0.0f);
	for (float i = 0; i > -2 * PI - step; i -= step)
	{
		glVertex3f(sin(i), -0.5, cos(i));
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0.0f, -0.5f, 0.0f);
	for (float i = 0; i < 2 * PI + step; i += step)
	{
		glVertex3f(sin(i), -0.5, cos(i));
	}
	glEnd();

	glPopMatrix();
}
