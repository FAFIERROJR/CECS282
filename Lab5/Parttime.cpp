//Francisco Fierro
//Lab 5
//Parttime.cpp

#include "Parttime.h"
#include "constants.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Parttime::putData(){
	Employee::putData();
	cout << "Hours worked per month: " << (int)(hoursPerWeek * 4) << endl;
	cout << "Part Time" << endl;
	cout << "Monthly Salary" << endl;
	cout << fixed << showpoint <<setprecision(2) << monthlyEarning() << endl;
}

void Parttime::setHPW(float hPW){
	hoursPerWeek = hPW;
}

float Parttime::getHPW() const{
	return hoursPerWeek;
}

float Parttime::monthlyEarning(){
	return hoursPerWeek * hRate * 4;
}

Parttime::Parttime(string fn, string ln, string i,	Date b, char s, float h,
		float hPW): Staff::Staff(fn, ln, i, b, s, h),
		hoursPerWeek(hPW){}