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
	string getLevel();
	void setEd(Education e);
	Education getEd();
	float monthlyEarning();
	Faculty(string fn = "Jane" , string ln  = "Doe" , int i = 0 , 
		int b = 1011900, char s = 'F'	, string l = "MS", 
		Education* e = new Education() );

protected:
	string level;
	Education ed;
};

#endif