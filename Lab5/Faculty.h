//Francisco Fierro
//Lab 5
//Faculty.h

#ifndef H_FACULTY
#define H_FACULTY

#include <iostream>
#include "Employee.h"
#include "Education.h"
using namespace std;

class Faculty: public Employee{
public:
	void putData();
	void setLevel(string l);
	string getLevel() const;
	void setEd(Education e);
	Education getEd() const;
	float monthlyEarning();
	Faculty(string fn = "Jane" , string ln  = "Doe" , string i = 0 , 
		Date b = Date(), char s = 'F'	, string l = "MS", 
		Education e = Education());

protected:
	string level;
	Education ed;
};

#endif