#include "Staff.h"
#include "constants.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Staff::putData() const{
	Employee::putData();
	cout << "Full Time" << endl;
	cout << "Monthly Salary" << endl;
	cout << fixed << showpoint <<setprecision(2) << monthlyEarning() << endl;
	}

void Staff::setHRate(float hR){
	hRate = hR;
}

float Staff::getHRate() const{
	return hRate;
}

float Staff::monthlyEarning() const{
	return hRate * STAFF_MONTHLY_HOURS_WORKED;
}

Staff::Staff(string fn, string ln, int i,
		int b, char s, float h): Employee::Employee(fn, ln, i, b, s),
		hRate(h){}
