#include "Sphere.h"

void Sphere::Draw()
{
	float step = PI / Accuracy * 2;
	float r1 = 1, r2;
	float deltaZ = r1 / Accuracy * 2;

	glPushMatrix();

	Transform();
	
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	
	for (int i = 0; i < Accuracy; i++)
	{
		glColor3fv((Vector3(deltaZ, deltaZ, deltaZ) * (i - 1) + Color) / 2);
		r2 = sqrtf(1 - deltaZ * (i + 1) * deltaZ * (i + 1));
		for (int j = -1; j <= 1; j += 2)
		{
			glBegin(GL_TRIANGLE_STRIP);
			for (float a = 0; a <= 2 * PI + step; a += step) {
				float x1 = cosf(a);
				float z1 = sinf(a);
				float x2 = x1 * r2;
				float z2 = z1 * r2;
				x1 *= r1; z1 *= r1;
				
				glVertex3f(x1, deltaZ * i * j, z1);
				glVertex3f(x2, deltaZ * (i + 1) * j, z2);
			}
			glEnd();
		}
		r1 = r2;
	}

	glPopMatrix();
}
