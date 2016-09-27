#include "Faculty.h"
#include "consntants.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Faculty::putData(){
	Employee::putData();
	string title = "";
	if(level.compare("AS") == 0){
		title = "Assistant";
	}
	else if(level.compare("AO") == 0){
		title = "Associate";
	}
	else if(level.compare("FU") == 0){
		title = "Full";
	}
	cout << title << " " << firstName << " " << lastName
		<< endl;
	cout << "Montly Salary: " << fixed << showpoint <<
		setprecision(2) << monthlyEarning() << endl;

}

void Faculty::setLevel(string l){
	level = l;
}

string Faculty::getLevel(){
	return level;
}

void Faculty::setEd(Education e){
	ed = e;
}

Education Faculty::getEd(){
	return ed;
}

float Faculty::monthlyEarning(){
	if(level.compare("AS") == 0){
		return FACULTY_MONTHLY_SALARY;
	}
	else if(level.compare("AO") == 0){
		return FACULTY_MONTHLY_SALARY * 1.2;
	}
	else if(level.compare("FU") == 0){
		return FACULTY_MONTHLY_SALARY * 1.4;
	}
}

Faculty::Faculty(string fn, string ln, int i, int b,
	 char s, string l, Education e): Employee::Employee(
	 	fn, ln, i, b, s), level(l), ed(ed)