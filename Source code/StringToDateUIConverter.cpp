#include "StringToDateUIConverter.h"

bool StringtoDateUIConverter::isValidFormat(string value) {
	const regex Pattern("\\b\\d{1,2}\\/\\d{1,2}\\/\\d{4}\\b");
	bool result = regex_match(value, Pattern);
	return result;	
}

bool StringtoDateUIConverter::tryConvertBack(string value, Date& d) {
	bool result = true;
	if (isValidFormat(value)) {
		d = convertBack(value);
	}
	else result = false;
	return result;
}

Date StringtoDateUIConverter::convertBack(string value) {
	vector<int> vec_resDate;
	while (value.find_first_of(_separator) != -1) {
		string temp = value.substr(0, value.find_first_of(_separator));
		vec_resDate.push_back(stoi(temp));
		value = value.substr(value.find_first_of(_separator) + 1,
			value.size() - value.find_first_of(_separator));
	}
	vec_resDate.push_back(stoi(value));
	Date resultDate(vec_resDate[0], vec_resDate[1], vec_resDate[2]);
	return resultDate;
}
