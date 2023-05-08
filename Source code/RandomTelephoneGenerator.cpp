#include "RandomTelephoneGenerator.h"

string RandomTelephoneGenerator::toTelephoneString() {
	string output;
	stringstream builder;
	builder << _prefix[_rng.next(0, 11)] << "-" << to_string(_rng.next(1000, 9999)) << "-"
		<< to_string(_rng.next(100, 999));
	output = builder.str();
	return output;
}