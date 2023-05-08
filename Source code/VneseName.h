#include "Libraries.h"
#pragma once
class VneseName {
private:
	string _firstName;
	string _middleName;
	string _lastName;
public:
	string getFirst();
	string getMid();
	string getLast();
	void setFirst(string First);
	void setMid(string Mid);
	void setLast(string Last);
public:
	VneseName();
	VneseName(string F, string M, string L);
	string toString();
};
