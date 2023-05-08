#include "RandomEmailGenerator.h"

string RandomEmailGenerator::next(string name) {
	stringstream builder;
	string value = name;
	for (size_t i = 0; i < value.size(); i++)
	{
		if (value[i] >= 65 && value[i] <= 92) {
			value[i] += 32;
		}
	}
	vector<string> vec_emailName;
	while (value.find_first_of(_separator) != -1) {
		string temp = value.substr(0, 1);
		vec_emailName.push_back(temp);
		value = value.substr(value.find_first_of(_separator) + 1,
			value.size() - value.find_first_of(_separator) - 1);
	}
	vec_emailName.push_back(value);
	for (size_t i = 0; i < vec_emailName.size(); i++)
	{
		builder << vec_emailName[i];
	}
	builder << _emailDomain;
	string result = builder.str();
	return result;
}