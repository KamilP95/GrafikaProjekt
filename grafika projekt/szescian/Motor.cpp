#include "Motor.h"



Motor::Motor()
{
}

void Motor::Draw(float r, float height)
{
	glPushMatrix();
	glTranslatef(0, 0, -height / 4);
	Walec(r, height / 2);
	glTranslatef(0, 0, 3* height / 4);
	glRotatef(180, 1, 0, 0);
	Stozek(r, height / 2);
	glPopMatrix();
}

Motor::~Motor()
{
}
