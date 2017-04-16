#include "Sphere.h"

void Sphere::Draw()
{
	float step = PI / Accuracy * 2;

	glPushMatrix();

	Transform();
	
	for (float j = -PI / 2; j <= PI / 2; j += step)
	{
		glBegin(GL_TRIANGLE_STRIP);
		for (float i = -PI; i <= PI + step; i += step)
		{
			float y = sinf(j);
			float r = cosf(j);
			glColor3fv(Color * fabsf(y) + Color2 * (1.0 - fabsf(y)));
			glVertex3f(cosf(i) *fabsf(r), y, sinf(i) * fabsf(r));

			y = sinf(j + step);
			r = cosf(j + step);
			glColor3fv(Color * fabsf(y) + Color2 * (1.0 - fabsf(y)));
			glVertex3f(cosf(i) * fabsf(r), y, sinf(i) * fabsf(r));
		}
		glEnd();
	}
	

	glPopMatrix();
}
