//Francisco Fierro
//Lab 5
//Date.h

#ifndef H_DATE
#define H_DATE

#include <iostream>
using namespace std;

class Date{
public:
	void setDate(int m = 1, int d = 1, int y = 50);
	void showDate();
	Date(int m = 1, int d = 1, int y = 50);
	
protected:
	int month;
	int day;
	int year;
};

#endif