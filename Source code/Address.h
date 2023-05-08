#pragma once
#include "Libraries.h"

class Address {
private:
	string _numAddress;
	string _street;
	string _ward;
	string _district;
public:
	string getNumAddress() const;
	string getStreet() const;
	string getWard() const;
	string getDistrict() const;
	Address();
	Address(string numAddress, string street, string ward, string district);
};
