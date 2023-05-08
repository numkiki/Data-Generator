#pragma once
#include "Libraries.h"
#include "Date.h"

class StringtoDateUIConverter {
private:
	string _separator = "/";
public:
	bool isValidFormat(string value);
	bool tryConvertBack(string value, Date& d);
	Date convertBack(string value);
};
