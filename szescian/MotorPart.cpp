#include "MotorPart.h"

MotorPart::MotorPart(float radius, float height) : Radius(radius), Height(height)
{
	motor = Motor(Radius / 4, Height);
	prop = Prop(Radius - 5);
	shield = Shield(Radius, Height);
	grip = Grip(Radius);
}

void MotorPart::Draw()
{
	glPushMatrix();
	glColor3f(1, 0, 0);
	motor.Draw();
	glColor3f(1, 0, 1);
	shield.Draw();
	glColor3f(0, 1, 0);
	grip.Draw();
	glColor3f(0, 0, 1);
	glTranslatef(0, 0, Height / 2);
	prop.Draw();
	glPopMatrix();
}
