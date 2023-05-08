#pragma once

#include "Libraries.h"
#include "RandomTelephoneGenerator.h"

class TelephoneDataReader {
private:
	string _connectionString;
public:
	TelephoneDataReader(string);
	vector<string> getAll();

};
