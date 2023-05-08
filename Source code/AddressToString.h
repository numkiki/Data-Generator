#pragma once
#include "Address.h"
#include "RandomAddressGenerator.h"
#include "Libraries.h"

class AddressToString {
private:
	string _separator = ",";
public:
	string convert(const Address& value);
};