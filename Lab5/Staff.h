#ifndef H_STAFF
#define H_STAFF

#include <iostream>
#include "Employee.h"

class Staff: public Employee{
public:
	void putData() const;
	void setHRate(float hR);
	float getHRate() const;
	float monthlyEarnings();
	Staff(string n1 = "Jane", string n2 = "Doe", int i = 0,
		int b =1011900, char s = 'F', float h);

protected:
	float hRate;
};

#endif