#include "Grip.h"


Grip::Grip(float radiusBig, float radiusSmall) :RadiusSmall(radiusSmall), RadiusBig(radiusBig)
{
	Part = Cylinder(RadiusSmall, RadiusBig);
}

void Grip::Draw()
{
	//glColor3fv(Color);
	glPushMatrix();
	glRotatef(90, 1, 0, 0);

	for (int i = 0; i < 3; i++)
	{
		glTranslatef(0, 0, (RadiusBig) / 2);
		Part.Draw();
		glTranslatef(0, 0, -(RadiusBig) / 2);
		glRotatef(120, 0, 1, 0);
	}
	glPopMatrix();
}
