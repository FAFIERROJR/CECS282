//Francisco Fierro
//Lab 5
//Date.cpp

#include "Date.h"
#include <iostream>

using namespace std;

void Date::setDate(int m, int d, int y){
	month = m;
	day = d;
	year = y;
}

void Date::showDate(){
	cout << month << "/" << day << "/" << year << endl;
}

Date::Date(int m, int d, int y){
	month = m;
	day = d;
	year = y;
}