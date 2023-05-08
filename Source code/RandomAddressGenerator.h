#pragma once
#include "Libraries.h"
#include "RandomNumberGenerator.h"
#include "Address.h"

class RandomAddressGenerator {
private:
	RandomNumberGenerator _rng;
	vector<string> _street;
	vector<string> _district;
	vector<string> _ward;
public:
	RandomAddressGenerator() {
		_street = { "Nguyen Huu Canh", "Nguyen Dinh Chieu", "Nguyen Van Cu", "Le Van Si", "Bui Thi Xuan"
					, "Pham Viet Chanh", "Tran Van Dang", "Dong Ho", "Tran Binh Trong", "An Duong Vuong"};
		_district = { "Tan Binh", "Binh Thanh", "Go Vap", "5", "7", "10", "2", 
					"Phu Nhuan", "7", "3", "1", "Binh Tan"};
		_ward = { "Pham Ngu Lao", "Tan Hung", "Tan Kieng", "2", "13", "12", "11", "Ong Lanh"};
	}
	Address next();
};
