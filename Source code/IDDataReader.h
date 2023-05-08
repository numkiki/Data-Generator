#pragma once

#include "Libraries.h"
#include "RandomNumberGenerator.h"

class IDDataReader {
private:
	string _connectionString;
public:
	IDDataReader(string);
	vector<string> getAll();
};