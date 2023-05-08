#include "RandomAddressGenerator.h"

Address RandomAddressGenerator::next() {
	string addNum = to_string(_rng.next(1, 1000));
	string street = _street[_rng.next(_street.size())];
	string ward = _ward[_rng.next(_ward.size())];
	string district = _district[_rng.next(_district.size())];

	Address result(addNum, street, ward, district);
	return result;
}