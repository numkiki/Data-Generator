#include "NameDataReader.h"

NameDataReader::NameDataReader(string connectionString) {
	this->_connectionString = connectionString;
}

vector<VneseName> NameDataReader::getAll() {
	vector<VneseName> vec_name;
	ifstream input;
	StringToName stn;
	VneseName vnname;

	input.open("students.txt", ios_base::in);
	while (!input.eof()) {
		string buffer;
		getline(input, buffer);
		if (stn.tryConvertBack(buffer, vnname)) {
			vec_name.push_back(vnname);
		}
		else continue;
	}
	input.close();
	return vec_name;
}