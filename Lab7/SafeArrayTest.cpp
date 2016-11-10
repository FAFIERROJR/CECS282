//CECS 282
//Lab 7
//Francisco Fierro
#include <iostream>
#include "SafeArray.h"

using namespace std;

int main(){
	int a[] = {12, 4, 7, 9, 10};
	SafeArray array(a);
	array.print();
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 3;
	array[4] = 4;
	array.print();
	array[5] = 5;

}