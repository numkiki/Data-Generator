#include "AddressDataReader.h"

AddressDataReader::AddressDataReader(string connectionString){
	string _connectionString = connectionString;
}

vector<string> AddressDataReader::getAll() {
	const regex Pattern("\\b(\\d+( [A-z]+)+)*\\,\\s(([A-z]+)\\s)*\\ward(\\s\\d+)*\\,\\s(([A-z]+)\\s)*\\District(\\s\\d+)*\\,\\s\\Ho Chi Minh City\\b");
	vector<string> vec_add;
	ifstream input;
	input.open("students.txt", ios_base::in);

	while (!input.eof()) {
		string buffer;
		getline(input, buffer);
		if (regex_match(buffer, Pattern)) {
			vec_add.push_back(buffer);
		}
		else continue;
	}
	input.close();
	return vec_add;
}