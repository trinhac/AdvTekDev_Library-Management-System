#pragma once
//---------- BUILT-IN
#include <iostream>
#include <string>
using namespace std;

//--- DEV LIBs
#include "GlobalType.h"
#include "Address.h"

class Person
{
	string name;
	Address address;
	string email;
	string phone;
public:
	Person(
		string name,
		Address address,
		string email,
		string phone

	);
	Person() = default;
	string toString();
	string getName();
	Address getAddress();
	string getEmail();
	string getPhone();
};

