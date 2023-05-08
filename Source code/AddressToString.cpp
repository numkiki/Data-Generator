#include "AddressToString.h"

string AddressToString::convert(const Address& value) {
	stringstream builder;
	builder << value.getNumAddress() << " " << value.getStreet() << _separator;

	if (value.getWard().size() > 2) {
		builder << " " << value.getWard() << " Ward" << _separator;
	}
	else {
		builder << " Ward " << value.getWard() << _separator;
	}

	if (value.getDistrict().size() > 2) {
		builder << " " << value.getDistrict() << " District" << _separator;
	}
	else {
		builder << " District " << value.getDistrict() << _separator;
	}

	builder << " Ho Chi Minh City";
	string result = builder.str();

	return result;
}
