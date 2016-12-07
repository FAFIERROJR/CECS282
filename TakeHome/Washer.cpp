#include "Washer.h"

using namespace std;

Washer::Washer(int seconds){
	secondsForWash = seconds;
}
void Washer::startWashing(){
	washTimeLeft = secondsForWash;
}

void Washer::oneSecond(){
	if(washTimeLeft > 0){
		washTimeLeft--;
	}
}

bool Washer::isBusy(){
	if(washTimeLeft == 0){
		return false;
	}
	return true;
}