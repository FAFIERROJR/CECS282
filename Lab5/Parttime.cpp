#include "Parttime.h"
#include "constants.h"
#include <iostream>

using namespace std;

void Parttime::setHPW(float hPW){
	hoursPerWeek = hPW;
}

float Parttime::getHPW() const{
	return hoursPerWeek;
}

float Parttime::monthlyEarning(){
	return hoursPerWeek * hRate * 4;
}

Parttime::Parttime(string fn, string ln, int i,	Date b, char s, float h,
		float hPW): Staff::Staff(fn, ln, i, b, s, h),
		hoursPerWeek(hPW){}