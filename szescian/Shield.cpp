#include "Shield.h"


Shield::Shield(float radius, float height, float thickness) :Radius(radius), Height(height), Thickness(thickness)
{
	In = Orb (Radius, Radius, Height);
	Out = Orb (Radius + Thickness, Radius + Thickness, Height / 3);
	Up = Orb (Radius + Thickness, Radius, Height / 3);
	Down = Orb (Radius, Radius + Thickness, Height / 3);
}

void Shield::Draw()
{
	//glColor3fv(Color);
	glPushMatrix();
	glTranslatef(0, 0, -Height / 2);
	In.Draw();
	Down.Draw();
	glTranslatef(0, 0, Height / 3);
	Out.Draw();
	glTranslatef(0, 0, Height / 3);
	Up.Draw();
	glPopMatrix();
}
