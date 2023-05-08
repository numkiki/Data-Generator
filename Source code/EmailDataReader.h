#pragma once
#include "Libraries.h"

class EmailDataReader {
private:
	string _connectionString;
public:
	EmailDataReader(string);
	vector<string> getAll();
};