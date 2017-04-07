#pragma once
#include <stdlib.h>
#include <time.h>


static class Random
{
public:
	static void InitializeSeed(int seed = INT_MIN) { seed = (seed == INT_MIN) ? time(NULL) : seed; srand(seed); }
	static int Next(int max = RAND_MAX) { return rand() % (max + 1); }
	static int Next(int min, int max) { return rand() % (max + 1 - min) + min; }
	static float NextF(float max = 1) { return rand() / (float)RAND_MAX * max; }
	static float NextF(float min, float max) { return rand() / (float)RAND_MAX * (max - min) + min; }
};
