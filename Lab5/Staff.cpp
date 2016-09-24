#include "Staff.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Staff::putData() const{
	Employee::putData();
	cout << "Full Time" << endl;
	cout << "Monthly Salary" << endl;
	cout << fixed << showpoint <<setprecision(2) << hRate << endl;
	}

void Staff::setHRate(float hR){
	hRate = hR;
}

float Staff::getHRate() const{
	return hRate;
}

float Staff::monthlyEarnings(){
	return hRate * 40.0;
}