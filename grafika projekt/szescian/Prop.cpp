#include "Prop.h"


Prop::Prop()
{
}

void Prop::Draw(float r, float height, float skosnosc)
{
	glPushMatrix();
	glRotatef(90.0, 0.0, 1.0, 0.0);
	StozekElipsa(r, height, skosnosc);
	glRotatef(180.0, 0.0, 1.0, 0.0);
	StozekElipsa(r, height, skosnosc);
	glPopMatrix();
}

void Prop::Rotate(float r, float height, float skosnosc, float v)	//nie dzia³a
{
	glPushMatrix();
	glRotatef(v, 1.0, 0.0, 0.0);
	Draw(r, height, skosnosc);
	v += v;
	glPopMatrix();
}

Prop::~Prop()
{
}
