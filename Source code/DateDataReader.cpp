#include "DateDataReader.h"

DateDataReader::DateDataReader(string connectionString) {
	this->_connectionString = connectionString;
}

vector<Date> DateDataReader::getAll() {
	vector<Date> vec_Date;
	ifstream input;
	StringtoDateUIConverter stdc;
	Date d;

	input.open("students.txt", ios_base::in);
	while (!input.eof()) {
		string buffer;
		getline(input, buffer);
		if (stdc.tryConvertBack(buffer, d) == true) {
			vec_Date.push_back(d);
		}
		else continue;
	}
	input.close();
	return vec_Date;
}