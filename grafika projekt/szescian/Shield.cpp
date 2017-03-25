#include "Shield.h"



Shield::Shield()
{
}

void Shield::Draw(float r1, float r2, float height)
{
	glPushMatrix();
	glTranslatef(0, 0, -height/2);
	glColor3f(0, 1, 0);
	Orb(r1, r1, height);
	glColor3f(0, 1, 0.7);
	Orb(r1, r2, height / 4);
	glTranslatef(0, 0, height / 4);
	glColor3f(0, 1, 0);
	Orb(r2, r2, height / 2);
	glTranslatef(0, 0, height / 2);
	glColor3f(0, 1, 0.7);
	Orb(r2, r1, height / 4);
	glTranslatef(0, 0, -height / 4);
	glPopMatrix();

	Uchwyt(r1, r2, height);
}

void Shield::Uchwyt(float r1, float r2, float height)
{
	glPushMatrix();
	glColor3f(1, 0, 0);
	glTranslatef(0, 0, -height / 4);
	glRotatef(90, 1, 0, 0);

	for (int i = 0; i < 3; i++)
	{
		glTranslatef(0, 0, (r1 + r2) / 4);
		Walec(3, r1 + 1);
		glTranslatef(0, 0, -(r1 + r2) / 4);
		glRotatef(120, 0, 1, 0);
	}
	glPopMatrix();
}

Shield::~Shield()
{
}
