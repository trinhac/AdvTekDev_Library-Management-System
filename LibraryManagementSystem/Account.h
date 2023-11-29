#pragma once
//---------- BUILT-IN
#include <iostream>
#include <string>
using namespace std;
//--- DEV LIBs
#include "GlobalType.h"
#include "Person.h"


class Account
{
	string id;
	string password;
	AccountStatus status;
	Person person;
public:
	Account(
		string id,
		string password,
		AccountStatus status,
		Person person
	);

	bool resetPassword();
};

