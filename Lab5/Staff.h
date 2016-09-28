#ifndef H_STAFF
#define H_STAFF

#include <iostream>
#include "Employee.h"

using namespace std;

class Staff: public Employee{
public:
	void putData();
	void setHRate(float hR);
	float getHRate() const;
	float monthlyEarning();
	Staff(string fn = "Jane", string ln = "Doe", string i = 0, 
		Date b = Date(), char s = 'F', float h = 0.0);

protected:
	float hRate;
};

#endif