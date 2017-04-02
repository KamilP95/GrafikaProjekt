#pragma once

//Wy³šczanie b³êdów przed "fopen"
#define  _CRT_SECURE_NO_WARNINGS

// £adowanie bibliotek:

#ifdef _MSC_VER                         // Check if MS Visual C compiler
#  pragma comment(lib, "opengl32.lib")  // Compiler-specific directive to avoid manually configuration
#  pragma comment(lib, "glu32.lib")     // Link libraries
#endif

#include <windows.h>            // Window defines
#include <gl\gl.h>              // OpenGL
#include <gl\glu.h>             // GLU library


#include "Vector3.h"


class Solid3D
{
public:
	Vector3 Position = Vector3();
	Vector3 Rotation = Vector3();
	Vector3 Scale = Vector3(1.0f, 1.0f, 1.0f);
	Vector3 Color = Vector3(.5f, .5f, .5f);

	virtual void Draw() = 0;
	virtual ~Solid3D() {};

	void SetPosition(float x, float y, float z) { Position = Vector3(x, y, z); }
	void SetRotation(float x, float y, float z) { Rotation = Vector3(x, y, z); }
	void SetScale(float x, float y, float z) { Scale = Vector3(x, y, z); }
	void SetColor(float x, float y, float z) { Color = Vector3(x, y, z); }

protected:

	void Transform() const
	{
		glTranslatef(Position.X, Position.Y, Position.Z);
		glRotatef(Rotation.X, 1, 0, 0);
		glRotatef(Rotation.Y, 0, 1, 0);
		glRotatef(Rotation.Z, 0, 0, 1);
		glScalef(Scale.X, Scale.Y, Scale.Z);
	}
};