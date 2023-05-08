#pragma once
#include "Libraries.h"
#include "Address.h"

class AddressDataReader {
private:
	string _connectionString;
public:
	AddressDataReader(string);
	vector<string> getAll();
};
