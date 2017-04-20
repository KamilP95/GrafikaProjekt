#include "StoneWall.h"


StoneWall::StoneWall(int lod, float min, float max, float x, float y, float z) : _levelOfDetails(lod), minOffset(min), maxOffset(max)
{
	SetScale(x, y, z);
	SetOffsets();
}

StoneWall::~StoneWall()
{
	delete[] _zOffsets;
	_zOffsets = nullptr;
}

void StoneWall::Draw()
{
	float step = 100.0f / _levelOfDetails;

	glPushMatrix();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	
	Transform();
	glTranslatef(-50, -50, 0);

	for (int i = 0; i < _levelOfDetails; i++)
	{
		glBegin(GL_TRIANGLE_STRIP);
		for (int j = 0; j <= _levelOfDetails; j++)
		{
			float z = _zOffsets[i * _levelOfDetails + j];
			glColor3fv(Color + Vector3(1, 1, 1) * (z / (maxOffset + fabsf(minOffset)) / 5));
			glVertex3f(j * step, i * step, z);

			z = _zOffsets[(i + 1) * _levelOfDetails + j];
			glColor3fv(Color + Vector3(1, 1, 1) * (z / (maxOffset + fabsf(minOffset)) / 5));
			glVertex3f(j * step, (i + 1) * step, z);		
		}
		glEnd();
	}

	glPopMatrix();
}

void StoneWall::SetOffsets()
{
	int size = _levelOfDetails + 1;

	delete[] _zOffsets;
	_zOffsets = new float[size * size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
				_zOffsets[i * _levelOfDetails + j] = 0.0f;
			else
				_zOffsets[i * _levelOfDetails + j] = Random::NextF(minOffset, maxOffset);
}
