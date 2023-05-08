#include "RandomDateGenerator.h"

Date RandomDateGenerator::next() {

    int year = 2003;
    int month = _rng.next(1, 12);

    int maxDaysInMonth[] = {
        -1, 31, 28, 31, 30, 31, 30, 31,
        31, 30, 31, 30, 31
    };

    if (Date::isLeapYear(year)) {
        maxDaysInMonth[2] = 29;
    }
    int day = _rng.next(1, maxDaysInMonth[month]);

    Date result(day, month, year);
    return result;
}