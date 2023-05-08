#include "DateToString.h"

string DateToStringUIConverter::convert(const Date& date) {
    stringstream builder;

    builder << setw(2) << setfill('0') << date.day() << "/";
    builder << setw(2) << setfill('0') << date.month() << "/";
    builder << date.year();

    string result = builder.str();
    return result;
}