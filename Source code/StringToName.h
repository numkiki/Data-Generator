#pragma once

#include "Libraries.h"
#include "VneseName.h"


class StringToName {
private:
	string _separator = " ";
public:
	bool isValidFormat(string value);
	bool tryConvertBack(string value, VneseName& vnname);
	VneseName convertBack(string value);
};