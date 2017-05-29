#pragma once

#include "Vector3.h"
#include "Texture.h"


class Solid3D :
	Texture
{
public:
	Vector3 Position = Vector3();
	Vector3 Rotation = Vector3();
	Vector3 Scale = Vector3(1.0f, 1.0f, 1.0f);
	Vector3 Color = Vector3(.5f, .5f, .5f);
	Vector3 Color2 = Vector3(.5f, .5f, .5f);
	char * TextureName = nullptr;
	bool TextureOn = 0;

	virtual void Draw() = 0;
	virtual ~Solid3D() {}

	void SetPosition(float x, float y, float z) { Position = Vector3(x, y, z); }
	Vector3 GetPosition() { return Position; }
	void SetRotation(float x, float y, float z) { Rotation = Vector3(x, y, z); }
	void SetScale(float x, float y, float z) { Scale = Vector3(x, y, z); }
	void SetColor(float r, float g, float b) { Color = Vector3(r, g, b); }
	void SetColor2(float r, float g, float b) { Color2 = Vector3(r, g, b); }
	void SetTexture(char * filename) { TextureName = filename; }
	void SetTexture() { TextureOn = 1; }

	float Height() const { return Scale.Y; }
	float Width() const { return Scale.X; }
	float Length() const { return Scale.Z; }

protected:

	void Texture()
	{
		if(TextureName)	CreateTexture(TextureName);
	}

	void Transform() const
	{
		glTranslatef(Position.X, Position.Y, Position.Z);
		glRotatef(Rotation.X, 1, 0, 0);
		glRotatef(Rotation.Y, 0, 1, 0);
		glRotatef(Rotation.Z, 0, 0, 1);
		glScalef(Scale.X, Scale.Y, Scale.Z);
	}
};