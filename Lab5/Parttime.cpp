#include "Parttime.h"
#include "constants.h"
#include <iostream>

using namespace std;

float Parttime::monthlyEarning(){
	return hoursPerWeek * hRate * 4;
}

Parttime::Parttime(string fn, string ln, int i,
		int b, char s, h, hPW): Staff(fn, ln, i, b, s, h),
		hoursPerWeek(hPW){}