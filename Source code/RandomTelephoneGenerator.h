#pragma once
#include "Libraries.h"
#include "RandomNumberGenerator.h"

class RandomTelephoneGenerator {
private: 
	RandomNumberGenerator _rng;
	string _prefix[12] = { "086", "090", "033", "039", "098", "088", "082", "099", "078", "077", "093", "023"};
public:
	string toTelephoneString();
};
