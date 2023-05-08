#include "EmailDataReader.h"

EmailDataReader::EmailDataReader(string connectionString) {
	this->_connectionString = connectionString;
}

vector<string> EmailDataReader::getAll() {
	const regex IDPattern("\\b([a-z])\\w+\\@student.hcmus.edu.vn\\b");
	vector<string> vec_mail;
	ifstream input;
	input.open("students.txt", ios_base::in);
	while (!input.eof()) {
		string buffer;
		getline(input, buffer);
		if (regex_match(buffer, IDPattern)) {
			vec_mail.push_back(buffer);
		}
		else continue;
	}
	input.close();
	return vec_mail;
}