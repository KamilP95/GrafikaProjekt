#include "Skid.h"



Skid::Skid()
{
	base = Cylinder(3, 50);
	connection = Cylinder(2, 25);
}

void Skid::Draw()
{
	glPushMatrix();
	glColor3f(0, 0, 0);
	base.Draw();

	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(0, 0.5 * connection.Height, 0.5 * (base.Height / 2));
	glRotatef(70, 1, 0, 0);
	connection.Draw();
	glRotatef(-70, 1, 0, 0);
	glTranslatef(0, 0, -0.5 * base.Height);
	glRotatef(-70, 1, 0, 0);
	connection.Draw();

	glPopMatrix();
}
