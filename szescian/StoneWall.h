#pragma once
#include "Solid3D.h"
#include "Random.h"

class StoneWall :
	public Solid3D
{
protected:
	int _levelOfDetails;
	float minOffset;
	float maxOffset;
	float* _zOffsets = nullptr;
public:
	StoneWall(int lod = 10, float min = -1, float max = 1, float x = 1, float y = 1, float z = 1);
	~StoneWall();

	virtual void Draw() override;
	void LevelOfDetails(int lod) { _levelOfDetails = lod; SetOffsets(); }
	int LevelOfDetails() const { return _levelOfDetails; }
	void SetMinMax(float min, float max) { minOffset = min; maxOffset = max; SetOffsets(); }
protected:
	void SetOffsets();
};

