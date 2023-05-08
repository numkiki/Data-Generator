#include "TelDataReader.h"

TelephoneDataReader::TelephoneDataReader(string connectionString) {
	this->_connectionString = connectionString;
}

vector<string> TelephoneDataReader::getAll() {
	const regex Pattern("\\b\\d{3}\\-\\d{4}\\-\\d{3}\\b");
	vector<string> vec_tele;
	ifstream input;
	input.open("students.txt", ios_base::in);
	while (!input.eof()) {
		string buffer;
		getline(input, buffer);
		if (regex_match(buffer, Pattern)) {
			vec_tele.push_back(buffer);
		}
		else continue;
	}
	input.close();
	return vec_tele;
}

