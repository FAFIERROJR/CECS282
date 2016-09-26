#ifndef H_FACULTY
#define H_FACULTY

#include <iostream>
using namespace std;

class Faculty: public Employee{
public:
	void setLevel(string l);
	string getLevel();
	void setEd(Education e);
	Education getEd();
	Faculty(fn = "Jane" , ln  = "Doe" , i = 0 , 
		b = 1011900, s = "F", l = "MS", Education ed );

protected:
	string level;
	Education ed;
}