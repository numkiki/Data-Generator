#include "IDDataReader.h"

IDDataReader::IDDataReader(string connectionString) {
	this->_connectionString = connectionString;
}

vector<string> IDDataReader::getAll() {
	const regex IDPattern("\\b\\w[1-2]\\d+\\b");
	vector<string> vec_id;
	ifstream input;
	input.open("students.txt", ios_base::in);
	while (!input.eof()) {
		string buffer;
		getline(input, buffer);
		if (regex_match(buffer, IDPattern)) {
			vec_id.push_back(buffer);
		}
		else continue;
	}
	input.close();
	return vec_id;
}