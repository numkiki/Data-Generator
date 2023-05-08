#include "Libraries.h"
#pragma once
class Date {
private:
	int _day;
	int _month;
	int _year;
public:
	int day() const;
	int month() const;
	int year() const;
public:
	Date();
	Date(int, int, int);
public:
	static vector<int> getValidMaxDays(int year);
	static bool isLeapYear(int);
	static bool isValidDate(int, int, int);
};
