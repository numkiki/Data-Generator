#pragma once
#include "Libraries.h"
#include "RandomNameGenerator.h"
#include "RandomNumberGenerator.h"

class RandomEmailGenerator {
private:
	RandomNameGenerator _rnameg;
	string _emailDomain = "@student.hcmus.edu.vn";
	string _separator = " ";
public:
	string next(string);
};
