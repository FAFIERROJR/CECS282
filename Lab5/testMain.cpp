#include <iostream>
#include "Staff.h"
#include "Faculty.h"
#include "Parttime.h"

int main(){
	Staff staff;
	Faculty faculty;
	Parttime parttime;

	staff.putData();
	faculty.putData();
	parttime.putData();

	return 0;
}