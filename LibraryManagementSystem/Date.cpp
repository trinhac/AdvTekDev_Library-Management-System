#include "Date.h"
#include<string>
Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

void Date::setDate(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

string Date::displayDate() {
    return to_string(this->day) + "-" + to_string(this->month) + "-" + to_string(this->year);
}