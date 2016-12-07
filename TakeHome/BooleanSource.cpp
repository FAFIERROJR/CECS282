#include "BooleanSource.h"
#include <stdlib.h>
#include <time.h>

BooleanSource::BooleanSource(float p): probability(p){
	srand(0);
}

bool BooleanSource::query(){
	return rand() <= probability * RAND_MAX;
}