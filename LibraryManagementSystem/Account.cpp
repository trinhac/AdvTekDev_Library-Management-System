#include "Account.h"
Account::Account(
	string id,
	string password,
	AccountStatus status,
	Person person
)
{
	this->id = id;
	this->password = password;
	this->status = status;
	this->person = person;
}
bool Account::resetPassword()
{
	return true;
}