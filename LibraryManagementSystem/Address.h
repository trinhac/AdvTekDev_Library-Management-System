#pragma once
#include<string>
#include<iostream>
using namespace std;
class Address
{
	string streetAddress;
	string city;
	string state;
	string zipcode;
	string country;
public:
	Address(
		string streetAddress,
		string city,
		string state,
		string zipcode,
		string country
	);
	Address() = default;
	string toString();
};