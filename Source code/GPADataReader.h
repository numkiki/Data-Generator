#pragma once
#include "Libraries.h"
#include "RandomNumberGenerator.h"

class GPADataReader {
private:
	string _connectionString;
public:
	GPADataReader(string);
	vector<float> getAll();
};
