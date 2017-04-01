#include "MotorPart.h"



void MotorPart::Draw()
{
	Motor motor(Radius / 4, Height);
	Prop prop(Radius - 5);
	Shield shield(Radius, Height);
	Grip grip(Radius);

	glPushMatrix();
	glColor3f(1, 0, 0);
	motor.Draw();
	glColor3f(0, 1, 1);
	shield.Draw();
	glColor3f(0, 1, 0);
	grip.Draw();
	glColor3f(0, 0, 1);
	glTranslatef(0, 0, Height / 2);
	prop.Draw();
	glPopMatrix();
}
