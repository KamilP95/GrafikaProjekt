#include "Sphere.h"

void Sphere::Draw()
{
	float r1 = Radius, r2;
	float deltaZ = Radius / 20;

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	for (int i = 0; i < 20; i++)
	{
		glColor3f(1.0f / i, 0.02f * i, 0);
		r2 = sqrtf(Radius * Radius - deltaZ * (i + 1) * deltaZ * (i + 1));
		for (int j = -1; j <= 1; j += 2)
		{
			glBegin(GL_TRIANGLE_STRIP);
			for (float a = 0; a <= 2 * 3.15; a += PI / 50) {
				float x1 = cosf(a) * Scale.X;
				float y1 = sinf(a) * Scale.Y;
				float x2 = x1 * r2;
				float y2 = y1 * r2;
				x1 *= r1; y1 *= r1;
				
				glVertex3f(x1, y1, deltaZ * i * j * Scale.Z);
				glVertex3f(x2, y2, deltaZ * (i + 1) * j * Scale.Z);
			}
			glEnd();
		}
		r1 = r2;
	}
}
