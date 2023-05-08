#include "Date.h"

int Date::day() const {
	return _day;
}

int Date::month() const {
	return _month;
}

int Date::year() const {
	return _year;
}

Date::Date() {
    time_t info = time(NULL);
    tm* now = localtime(&info);

    _day = now->tm_mday;
    _month = now->tm_mon + 1;
    _year = now->tm_year + 1900;
}

Date::Date(int day, int month, int year) {
    _day = day;
    _month = month;
    _year = year;
}

vector<int> Date::getValidMaxDays(int year)
{
    vector<int> maxDaysInMonth = {
         -1, 31, 28, 31, 30, 31, 30, 31,
         31, 30, 31, 30, 31
    };

    if (isLeapYear(year)) {
        maxDaysInMonth[2] = 29;
    }

    return maxDaysInMonth;
}

bool Date::isLeapYear(int year) {
    bool result = (year % 400 == 0) ||
        ((year % 4 == 0) && (year % 100 != 0));

    return result;
}

bool Date::isValidDate(int day, int month, int year) {
    bool result = true;
    auto maxDaysInMonth = Date::getValidMaxDays(year);

    if (year < 1900) {
        result = false;
    }
    else if ((month < 1) || (month > 12)) {
        result = false;
    }
    else if ((day < 1) || (day > maxDaysInMonth[month])) {
        result = false;
    }

    return result;
}

