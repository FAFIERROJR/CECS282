
//Francisco Fierro
//Lab 5
//testMain.cpp
//Main file for Lab 5

#include <iostream>
#include <iomanip>
#include "Staff.h"
#include "Faculty.h"
#include "Parttime.h"
#include <typeinfo>

int main(){

	//create the Employees
	Employee *empPtr[9];

	Date bDay = Date(2,23,59);
	empPtr[0] = new Staff("Paita", "Allen", "123",
			bDay, 'M', 50.00);

	bDay.setDate(7,12,64);
	empPtr[1] = new Staff("Steven", "Zapata", "456",
		bDay, 'F', 35.00);

	bDay.setDate(6,2,70);
	empPtr[2] = new Staff("Enrique", "Rios", "789",
		bDay, 'M', 40.00);

	bDay.setDate(4,27,62);
	Education ed = Education("PhD", "Masters");
	empPtr[3] = new Faculty("Anne", "Johnson", "243",
		bDay, 'F', "FU", ed);

	bDay.setDate(3,14,75);
	ed.setDegree("PhD");
	ed.setMajor("English");
	empPtr[4] = new Faculty("William", "Bouris", "791",
		bDay, 'F', "AO", ed);

	bDay.setDate(5,22,80);
	ed.setDegree("MS");
	ed.setMajor("Physical Education");
	empPtr[5] = new Faculty("Christopher", "Andrade", "623",
		bDay, 'F', "AS", ed);

	bDay.setDate(8,10,77);
	empPtr[6] = new Parttime("Augusto", "Guzman", "455",
		bDay, 'F', 35.00, 30.0);

	bDay.setDate(9,15,87);
	empPtr[7] = new Parttime("Martin", "Depirro", "678",
		bDay, 'F', 30.00, 15.00);

	bDay.setDate(11,24,88);
	empPtr[8] = new Parttime("Marque", "Aldaco", "945",
		bDay, 'M', 35.0, 20.00 );


	//display their data
	float totalParttimeSalary = 0;
	float totalEmployeeSalary = 0;
	for(int i = 0; i < 9; i++){
		//Buch of old code
		//made putData() a virtual function
		//if(typeid(*empPtr[i]) == typeid(Staff)){
			//dynamic_cast<Staff*>(empPtr[i])->putData();
			//totalEmployeeSalary += dynamic_cast<Staff*>(empPtr[i])->monthlyEarning();

			
		//}
		//else if(dynamic_cast<Faculty*>(empPtr[i])){
			//dynamic_cast<Faculty*>(empPtr[i])->putData();
			//totalEmployeeSalary += dynamic_cast<Faculty*>(empPtr[i])->monthlyEarning();
		//}
		if(dynamic_cast<Parttime*>(empPtr[i])){
			//dynamic_cast<Parttime*>(empPtr[i])->putData();
			//totalParttimeSalary += dynamic_cast<Parttime*>(empPtr[i])->monthlyEarning();
			//totalEmployeeSalary += dynamic_cast<Parttime*>(empPtr[i])->monthlyEarning();
			totalParttimeSalary += empPtr[i]->monthlyEarning();
		}

		totalEmployeeSalary += empPtr[i]->monthlyEarning();
		empPtr[i]->putData();
		cout << "\n";
	}

		cout << "\n";
		cout << "Total Parttime Monthly Salary: " << setprecision(2) << showpoint <<
			fixed << totalParttimeSalary << endl;
		cout << "Total Employee Monthly Salary: " << fixed << totalEmployeeSalary <<
			endl;
}