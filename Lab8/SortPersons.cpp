#include <iostream>
#include <string>
#include "Person.h"

void bSort(Person** p, int size, bool sortByName);
void order(Person ** p1, Person** p2, bool sortByName);

int main(){
	Person *persons[5];
	int size = 0;

	char another = 'y';
	while(another == 'y'){
		persons[size] = new Person();
		persons[size]->setPerson();
		size++;
		cout << "Enter another Person(y/n)?" << endl;
		cin >> another;
		cin.ignore();
	}

	cout << "\nUnsorted:" <<endl;
	for(int i = 0; i <size; i++){
		cout << "Name: " << persons[i]->getName()<<endl;
		cout << "Salary: $" << persons[i]->getSalary() << endl <<"\n";
	}

	bSort(persons, size, true);

	cout << "\nSorted By Name:" <<endl;
	for(int i = 0; i <size; i++){
		cout << "Name: " << persons[i]->getName()<<endl;
		cout << "Salary: $" << persons[i]->getSalary() << endl <<"\n";
	}

	bSort(persons, size, false);
	
	cout << "\nSorted By Salary:" <<endl;
	for(int i = 0; i <size; i++){
		cout << "Name: " << persons[i]->getName()<<endl;
		cout << "Salary: $" << persons[i]->getSalary() << endl <<"\n";
	}

	return 0;

}

void bSort(Person ** p, int size, bool sortByName){
	for(int i = 0; i < size -1 ; i++){
		for(int j = 0 ; j < size - 1; j++){
			order(p + j, p + j + 1, sortByName);
		}
	}
}

void order(Person ** p1, Person ** p2, bool sortByName){
	if(sortByName){
		if((*p1)->getName().compare((*p2)->getName()) > 0){
			Person * temp = *p1;
			*p1 = *p2;
			*p2 = temp;
		}
	}
	else{
		if((*p1)->getSalary() < (*p2)->getSalary()){
			Person * temp = *p1;
			*p1 = *p2;
			*p2 = temp;
		}
	}
}