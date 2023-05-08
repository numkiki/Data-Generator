#include "GPADataReader.h"

GPADataReader::GPADataReader(string connectionString) {
	this->_connectionString = connectionString;
}

vector<float> GPADataReader::getAll() {
	const regex Pattern("\\b[0-9]{1,2}(\\.\\d{0,2})*\\b");
	vector<float> vec_gpa;
	ifstream input;
	input.open("students.txt", ios_base::in);
	while (!input.eof()) {
		string buffer;
		getline(input, buffer);
		if (regex_match(buffer, Pattern)) {
			float result = 0;
			string temp = buffer.substr(0, buffer.find_first_of("."));
			result = stoi(temp) * 100;
			if (buffer.size() > 2) {
				buffer = buffer.substr(buffer.find_first_of(".") + 1, buffer.size() - buffer.find_first_of(".") - 1);
				if (buffer.size() == 1) {
					result = result + stoi(buffer) * 10;
				}
				else if (buffer.size() == 2) {
					result = result + stoi(buffer);
				}
			}
			vec_gpa.push_back(result / 100);
		}
		else continue;
	}
	input.close();
	return vec_gpa;
}
