#include "Cube.h"



Cube::Cube(float x, float y, float z)
{
	SetScale(x, y, z);
}

void Cube::Draw()
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glColor3fv(Color);
	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-Scale.X / 2, -Scale.Y / 2, Scale.Z / 2);
		glVertex3f(-Scale.X / 2, Scale.Y / 2, Scale.Z / 2);
		glVertex3f(Scale.X / 2, -Scale.Y / 2, Scale.Z / 2);
		glVertex3f(Scale.X / 2, Scale.Y / 2, Scale.Z / 2);
		glVertex3f(Scale.X / 2, -Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(Scale.X / 2, Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(-Scale.X / 2, -Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(-Scale.X / 2, Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(-Scale.X / 2, -Scale.Y / 2, Scale.Z / 2);
		glVertex3f(-Scale.X / 2, Scale.Y / 2, Scale.Z / 2);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-Scale.X / 2, Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(Scale.X / 2, Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(-Scale.X / 2, Scale.Y / 2, Scale.Z / 2);
		glVertex3f(Scale.X / 2, Scale.Y / 2, Scale.Z / 2);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-Scale.X / 2, -Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(-Scale.X / 2, -Scale.Y / 2, Scale.Z / 2);
		glVertex3f(Scale.X / 2, -Scale.Y / 2, -Scale.Z / 2);
		glVertex3f(Scale.X / 2, -Scale.Y / 2, Scale.Z / 2);
	glEnd();
}


