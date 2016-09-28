#ifndef H_EMPLOYEE
#define H_EMPLOYEE

#include "Date.h"

using namespace std;

class Employee{
public:
	void putData();
	void setFirstName(string n);
	string getFirstName() const;
	void setLastName(string n);
	string getLastName() const;
	void setID(string i);
	string getID() const;
	void setBDay(int m, int d, int y);
	void setBDay(Date b);
	void setSex(char s);
	char getSex() const;
	virtual float monthlyEarning() = 0;
	Employee(string n1 = "Jane", string n2 = "Doe", string i = "0",
		Date b = Date(), char s = 'F');
		
protected:
	string firstName;
	string lastName;
	string id;
	char sex;
	Date bDay;
};
#endif