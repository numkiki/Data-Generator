#include "StringToName.h"

bool StringToName::isValidFormat(string value) {
	const regex Pattern("\\b([A-Z][a-z]+\\s){2}[A-Z][a-z]+\\b");
	bool result = regex_match(value, Pattern);
	return result;
}

bool StringToName::tryConvertBack(string value, VneseName& vnname) {
	bool result = true;
	if (isValidFormat(value)) {
		vnname = convertBack(value);
	}
	else result = false;
	return result;
}

VneseName StringToName::convertBack(string value) {
	vector<string> vec_name;
	while (value.find_first_of(_separator) != -1) {
		string temp = value.substr(0, value.find_first_of(_separator));
		vec_name.push_back(temp);
		value = value.substr(value.find_first_of(_separator) + 1,
			value.size() - value.find_first_of(_separator) - 1);
	}
	vec_name.push_back(value);
	VneseName resultName(vec_name[0], vec_name[1], vec_name[2]);
	return resultName;
}