#include "VneseName.h"
	//getter
string VneseName::getFirst() { return _firstName; };
string VneseName::getMid() { return _middleName; };
string VneseName::getLast() { return _lastName; };
	//setter
void VneseName::setFirst(string First) { _firstName = First; };
void VneseName::setMid(string Mid) { _middleName = Mid; };
void VneseName::setLast(string Last) { _lastName = Last; };
	//construtor 
VneseName::VneseName() {
		_firstName = "Nguyen";
		_middleName = "Van";
		_lastName = "A";
}
	//parameterized constructor
VneseName::VneseName(string F, string M, string L) {
		_firstName = F;
		_middleName = M;
		_lastName = L;
}

string VneseName::toString() {
		stringstream writer;
		writer << _firstName << " " << _middleName << " " << _lastName;
		return writer.str();
}
