#include "Prop.h"


void Prop::Draw()
{
	//glColor3fv(Color);
	Cone Part(Width, Radius);

	glPushMatrix();
	glScalef(1, 1, 0.3);		//vector Scale nie chce dzialac
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glTranslatef(0, 0, -Radius / 2);
	Part.Draw();
	glRotatef(180.0, 0.0, 1.0, 0.0);
	glTranslatef(0, 0, -Radius);
	Part.Draw();
	glPopMatrix();
}
