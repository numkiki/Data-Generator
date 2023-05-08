#include "Libraries.h"
#include "RandomNumberGenerator.h"
#include "VneseName.h"
#pragma once
using namespace std;
class RandomNameGenerator {
private:
	RandomNumberGenerator _rng;
	string _firstName[11] = { "Nguyen", "Tran", "Le", "Pham", "Hoang", "Huynh", "Dam", "Vo", "Phan", "Ly" 
							, "Ngo"};
	string _middleName[15] = { "Van", "Vinh", "Duc", "Nhu", "Quang", "Nhat", "Thanh", "Manh", "Phi", "Nhu"
							, "Uyen", "Xuan", "Huu", "Minh", "Thanh"};
	string _lastName[15] = { "An", "Bao", "Anh", "Chi", "Hung", "Duong", "Tung", "Nam", "Tuan", "Ngoc"
							, "Phuong", "Quynh", "Thai", "Huy", "Tien"};
public:
	VneseName next();
};

