#include "Camera.h"



Camera::Camera()
{
	connection = Cylinder(5, 10);
	lens = Cylinder(4, 5);
	glass = Cylinder(3, 0.1f);
	cover = Cube(15, 15, 20);
	diode = Sphere(1);
}

void Camera::Draw()
{
	glPushMatrix();
	
	glScalef(Scale.X, Scale.Y, Scale.Z);
	glRotatef(Rotation.X, 1, 0, 0);
	glRotatef(Rotation.Y, 0, 1, 0);
	glRotatef(Rotation.Z, 0, 0, 1);
	glTranslatef(Position.X, Position.Y, Position.Z);

	glColor3f(0.5, 0.5, 0.5);
	cover.Draw();

	glColor3f(0, 1, 0);
	glTranslatef(0, connection.Height, 0);
	glRotatef(90, 1, 0, 0);
	connection.Draw();

	glColor3f(0, 0, 0);
	glRotatef(-90, 1, 0, 0);
	glTranslatef(0, -connection.Height, cover.Scale.Z / 2 + lens.Height / 2);
	lens.Draw();

	glColor3f(0.8, 0.8, 1);
	glTranslatef(0, 0, glass.Height / 2 + lens.Height / 2);
	glass.Draw();

	glColor3f(1, 0, 0);
	glTranslatef(0.3 * cover.Scale.X, 0.3 * cover.Scale.Y, -glass.Height / 2 - lens.Height);
	diode.Draw();

	glPopMatrix();
}



