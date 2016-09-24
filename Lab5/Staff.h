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

protected:
	float hRate;
};

#endif