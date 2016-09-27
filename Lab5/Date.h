#ifndef H_DATE
#define H_DATE

#include <iostream>
using namespace std;

class Date{
public:
	void setDate(int m = 1, int d = 1, int y = 1900);
	void showDate();
	Date(int m = 1, int d = 1, int y = 1900);
	
protected:
	int month;
	int day;
	int year;
};

#endif