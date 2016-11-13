#include "Person.h"
#include <iostream>

using namespace std;

void Person::setPerson(){
	cout << "Enter name" << endl;
	getline(cin, name);
	cout << "Enter salary" << endl;
	cin >> salary;
	cin.ignore();
}

string Person::getName(){
	return name;
}

float Person::getSalary(){
	return salary;
}