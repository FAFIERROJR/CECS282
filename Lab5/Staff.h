#ifndef H_STAFF
#define H_STAFF

#include <iostream>
#include "Employee.h"

using namespace std;

class Staff: public Employee{
public:
	void putData() const;
	void setHRate(float hR);
	float getHRate() const;
	float monthlyEarning() const;
	Staff(string fn = "Jane", string ln = "Doe", int i = 0, 
		int b =1011900, char s = 'F', float h = 0.0);

protected:
	float hRate;
};

#endif