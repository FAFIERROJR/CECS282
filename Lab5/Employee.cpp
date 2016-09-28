#include <iostream>
#include <iomanip>
#include "Employee.h"

using namespace std;

void Employee::putData(){
	cout << "Employee ID Number: " << id << endl;
	cout << "Employee Name: " << firstName << " " << lastName << endl;
	cout << "Birth Date: ";
	bDay.showDate();
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

void Employee::setID(string i){
	id = i;
}

string Employee::getID() const{
	return id;
}

void Employee::setBDay(int m, int d, int y){
	bDay = Date(m,d,y);
}

void Employee::setBDay(Date b){
	bDay = b;
}

void Employee::setSex(char s){
	sex = s;
}

char Employee::getSex() const{
	return sex;
}

Employee::Employee(string n1, string n2, string i, Date b, char s): 
	firstName(n1), lastName(n2), id(i), bDay(b), sex(s) {}
