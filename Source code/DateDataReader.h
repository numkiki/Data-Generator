#pragma once
#include "Libraries.h"
#include "Date.h"
#include "DateToString.h"
#include "StringToDateUIConverter.h"

class DateDataReader {
private:
	string _connectionString;
public:
	DateDataReader(string connectionString);
public:
	vector<Date> getAll();
};
