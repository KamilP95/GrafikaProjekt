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

	virtual void Draw() = 0;
	virtual ~Solid3D() {};
};