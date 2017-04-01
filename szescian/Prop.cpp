#include "Prop.h"


Prop::Prop(float radius, float width) :Radius(radius), Width(width)
{
	Part = Cone(Width, Radius);
}

void Prop::Draw()
{
	//glColor3fv(Color);
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
