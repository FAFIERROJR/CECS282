#ifndef H_PARTTIME
#define H_PARTTIME

#include "Staff.h"
#include <iostream>

using namespace std;

class Parttime: public Staff{

public:
	void setHPW(float hpW);
	float getHPW() const;
	float monthlyEarning();
	Parttime(string fn = "Jane", string ln = "Doe", int i = 0, 
		Date b = Date(), char s = 'F', float h = 0.0, float hPW = 0);

protected:
	float hoursPerWeek;

};

#endif