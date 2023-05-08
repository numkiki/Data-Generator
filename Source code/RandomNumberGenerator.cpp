#include "RandomNumberGenerator.h"

RandomNumberGenerator::RandomNumberGenerator() {
	srand(time(NULL));
}

int RandomNumberGenerator::next() {
	int result = rand();
	return result;
}

int RandomNumberGenerator::next(int ceiling) {
	int result = rand() % ceiling;
	return result;
}

int RandomNumberGenerator::next(int lower, int upper) {
	int result = rand() % (upper - lower + 1) + lower;
	return result;
}

float RandomNumberGenerator::GPA_next() {
	int number = rand() % 1000;
	float result = float(number) / 100;
	return result;
}

string RandomNumberGenerator::ID_next() {
	int result = rand() % (999999 - 100000 + 1) + 100000;
	string resultID = "21" + to_string(result);
	return resultID;
}