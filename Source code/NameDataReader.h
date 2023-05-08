#pragma once

#include "Libraries.h"
#include "VneseName.h"
#include "RandomNameGenerator.h"
#include "StringToName.h"

class NameDataReader {
private:
	string _connectionString;
public:
	NameDataReader(string);
	vector<VneseName> getAll();
};
