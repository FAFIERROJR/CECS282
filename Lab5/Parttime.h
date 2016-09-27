#ifndef
#define

#include "Staff.h"
#include <iostream>

using namespace std;

class Parttime: public Staff{

public:
	float monthlyEarning;
	Parttime(string fn = "Jane", string ln = "Doe", int i = 0, 
		int b =1011900, char s = 'F', float h = 0.0, hPW = 0);

protected:
	hoursPerWeek;

};