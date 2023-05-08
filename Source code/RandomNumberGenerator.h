#pragma once
#include "Libraries.h"

class RandomNumberGenerator {
public:
	RandomNumberGenerator();
public:
	int next();
	int next(int);
	int next(int, int);
	float GPA_next();
	string ID_next();
};
