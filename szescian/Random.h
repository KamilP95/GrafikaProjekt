#pragma once
#include <stdlib.h>
#include <time.h>


class Random
{
public:

	Random() {	srand(time(NULL));	}
	
	static int Next(int max = RAND_MAX) { return rand() % max; }
	static int Next(int min, int max) { return rand() % (max - min) + min; }
	static float NextF(float max = 1) { return rand() / (float)RAND_MAX * max; }
	static float NextF(float min, float max) { return rand() / (float)RAND_MAX * (max - min) + min; }
};

Random random;