#include "Drone.h"



Drone::Drone()
{
	cover = Sphere(45);
	//antenna = Cylinder(1, 50);
}

void Drone::Draw()
{
	glScalef(0.5, 0.5, 0.5);
	glRotatef(-90, 1, 0, 0);

	glPushMatrix();
	glScalef(1, 1, 0.5);
	cover.Draw();
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.3, 0.3, 0.3);
		glRotatef(90, 1, 0, 0);
		glTranslatef(0, cover.Radius / 4 + antenna.Height / 2 * sinf(70 * 180 / PI), -cover.Radius * 0.8);
		glRotatef(70, 1, 0, 0);
		antenna.Draw();
	glPopMatrix();
	//camera
	glPushMatrix();
		glRotatef(90, 1, 0, 0);
		glTranslatef(0, - cover.Radius / 2 - camera.Height() * 0.6, 0);
		camera.Draw();
	glPopMatrix();
	//left skid
	glPushMatrix();
		glRotatef(90, 1, 0, 0);
		glTranslatef(cover.Radius * 0.8, -cover.Radius / 2 - skid.Height(), 0);
		glRotatef(30, 0, 0, 1);
		glScalef(1.5, 1.5, 1.5);
		skid.Draw();
	glPopMatrix();
	//right skid
	glPushMatrix();
		glRotatef(90, 1, 0, 0);
		glTranslatef(-cover.Radius * 0.8, -cover.Radius / 2 - skid.Height(), 0);
		glRotatef(-30, 0, 0, 1);
		glScalef(1.5, 1.5, 1.5);
		skid.Draw();
	glPopMatrix();

	for (int i = 0; i < 6; i++)
	{
	glTranslatef(60 - 5, 0, 0);
	arm.Draw();
	glTranslatef(60, 0, 0);
	motor.Draw();
	glTranslatef(-120 + 5, 0, 0);
	glRotatef(60, 0, 0, 1);
	}

	
}
