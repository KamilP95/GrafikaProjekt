#include "Arm.h"


Arm::Arm(float lenght, float height, float width, float skewness) :Lenght(lenght), Height(height), Width(width), Skewness(skewness)
{
	In = Cube(Lenght, Width, Height / 3);
	Out = Cube(Width, Height / 3, Lenght, Skewness);
}

void Arm::Draw()
{
	glPushMatrix();
	glColor3f(1, 0, 0);
	In.Draw();
	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, Height / 3, 0);
	glColor3f(0, 1, 0);
	Out.Draw();
	glRotatef(180, 1, 0, 0);
	glTranslatef(0, 2 * Height / 3, 0);
	Out.Draw();
	glPopMatrix();
}
