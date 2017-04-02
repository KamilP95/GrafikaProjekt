#include "Grip.h"


Grip::Grip(float radiusBig, float radiusSmall) :RadiusSmall(radiusSmall), RadiusBig(radiusBig)
{
	Part = Cylinder();
	Part.SetScale(RadiusSmall * 2, RadiusBig, RadiusSmall * 2);
	Part.SetRotation(90, 0, 0);
}

void Grip::Draw()
{
	glColor3fv(Color);
	glPushMatrix();

	Transform();
	
	

	for (int i = 0; i < 3; i++)
	{
		glTranslatef(0, 0, (RadiusBig) / 2);
		Part.Draw();
		glTranslatef(0, 0, -(RadiusBig) / 2);
		glRotatef(120, 0, 1, 0);
	}
	glPopMatrix();
}
