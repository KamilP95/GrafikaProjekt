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
#include <math.h>

#include <stdio.h>
#include "resource.h"           // About box resource identifiers.
#define BITMAP_ID 0x4D42		// identyfikator formatu BMP


class Texture
{
private:
	BITMAPINFOHEADER	bitmapInfoHeader;
	unsigned char*		bitmapData;
	GLuint				textures;

public:
	virtual ~Texture() {}
	void CreateTexture(char * filename);

private:
	unsigned char *LoadBitmapFile(char *filename, BITMAPINFOHEADER *bitmapInfoHeader);
};

