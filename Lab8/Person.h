//Fancisco Fierro
//Lab 8

#ifndef H_PERSON
#define H_PERSON

#include <string>

using namespace std;

class Person{
protected:
	string name;
	float salary;

public:
	void setPerson();
	string getName();
	float getSalary();

	
};

#endif