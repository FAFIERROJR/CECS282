#include "BooleanSource.h"
#include <stdlib.h>
#include <ctime>

BooleanSource::BooleanSource(float p): probability(p){
	srand(time(0));
}

bool BooleanSource::query(){
	return rand() <= probability * RAND_MAX;
}