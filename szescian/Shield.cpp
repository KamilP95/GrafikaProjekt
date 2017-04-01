#include "Shield.h"


void Shield::Draw()
{
	Orb In(Radius, Radius, Height);
	Orb Out(Radius + Thickness, Radius + Thickness, Height/3);
	Orb Up(Radius + Thickness, Radius, Height/3);
	Orb Down(Radius, Radius + Thickness, Height/3);

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
