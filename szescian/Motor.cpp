#include "Motor.h"



void Motor::Draw()
{
	Cylinder Down(Radius, Height / 2);
	Cone Up(Radius, Height / 2);
	glPushMatrix();
	Down.Draw();
	glTranslatef(0, 0, Height / 2);
	Up.Draw();
	glPopMatrix();
}
