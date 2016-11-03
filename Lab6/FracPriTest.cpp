//Francisco Fierro
//CECS 282
//Lab 6
#include <iostream>
#include "FracPri.h"

using namespace std;

int main(){
	FracPri R3;
	FracPri R1;
	FracPri R2;

	R1.getFraction();
	cin >> R2;
	
	R1.showFraction();
	cout << R2;

	R3 = R1 + R2;
	cout << R3;

	R3 = R1 - R2;
	cout << R3;
	R3 = R1 * R2;
	cout << R3;
	R3 = R1 / R2;
	cout << R3;

	R3 = R1 + 10;
	cout << R3;

	R3 = 15 + R2;
	cout << R3;

	if(R1 < R2){
		cout << "R1 is less than R2." << endl;
	}
	else{
		cout << "R2 is less than or equal to R1." << endl;
	}

	R3 += 10;
	cout << R3;

	float num;
	cout << "Enter a float" << endl;
	cin >> num;
	R1 = num;
	cout << R1 << endl;

	num = R2;
	cout << num << endl;

	return 0;

}