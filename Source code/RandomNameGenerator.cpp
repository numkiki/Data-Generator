#include "RandomNameGenerator.h"

VneseName RandomNameGenerator::next() {
	VneseName vnName(_firstName[_rng.next(0, 10)], _middleName[_rng.next(0, 14)], 
		_lastName[_rng.next(0, 14)]);
	return vnName;
}
