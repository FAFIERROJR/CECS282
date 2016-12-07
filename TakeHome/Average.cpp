#include "Average.h"

using namespace std;

Average::Average(): carSum(0), totalWaitTime(0){}

int Average::getCars(){
	return carSum;
}

int Average::getTotalTime(){
	return totalWaitTime;
}

void Average::nextCar(int wait){
	carSum++;
	totalWaitTime += wait;
}