#pragma once

#define IN
#define OUT
#define INOUT 

#define OngTuThietKe 
#define mrTuVietVayDo

enum class AccountStatus {
	Active,
	Closed,
	Canceled,
	Blacklisted
};

enum class AccountType {
	Member,
	Guest,
	Manager,
	Receptionist
};