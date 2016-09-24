#include <iostream>
#include <iomanip>
#include "Employee.h"

using namespace std;

void Employee::putData() const{
	cout << "ID Employee Number: " << id << endl;
	cout << "Employee Name: " << firstName << " " << lastName << endl;
	cout << "Birth Date: " << bDay << endl;
}

void Employee::setFirstName(string n){
	firstName = n;
}

string Employee::getFirstName() const{
	return firstName;
}

void  Employee::setLastName(string n){
	lastName = n;
}

string Employee::getLastName() const{
	return lastName;
}

void Employee::setID(int i){
	id = i;
}

int Employee::getID() const{
	return id;
}

void Employee::setBDay(int b){
	bDay = b;
}

int Employee::getBDay() const{
	return bDay;
}

void Employee::setSex(char s){
	sex = s;
}

char Employee::getSex() const{
	return sex;
}
