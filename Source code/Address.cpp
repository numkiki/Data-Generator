#include "Address.h"

Address::Address() {
	_numAddress = "0";
	_street = "0";
	_ward = "0";
	_district = "0";
}
Address::Address(string numAddress, string street, string ward, string district) {
	_numAddress = numAddress;
	_street = street;
	_ward = ward;
	_district = district;
}

string Address::getNumAddress() const { return _numAddress; }
string Address::getStreet() const { return _street; }
string Address::getWard() const { return _ward; }
string Address::getDistrict() const { return _district; }
