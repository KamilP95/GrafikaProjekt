#include "Grip.h"


void Grip::Draw()
{
	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	Cylinder Part(RadiusSmall, RadiusBig);

	for (int i = 0; i < 3; i++)
	{
		glTranslatef(0, 0, (RadiusBig) / 2);
		Part.Draw();
		glTranslatef(0, 0, -(RadiusBig) / 2);
		glRotatef(120, 0, 1, 0);
	}
	glPopMatrix();
}
