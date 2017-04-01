#include "Motor.h"

Motor::Motor(float radius, float height) :Radius(radius), Height(height)
{
	Down = Cylinder(Radius, Height / 2);
	Up = Cone(Radius, Height / 2);
}

void Motor::Draw()
{
	glPushMatrix();
	Down.Draw();
	glTranslatef(0, 0, Height / 2);
	Up.Draw();
	glPopMatrix();
}
