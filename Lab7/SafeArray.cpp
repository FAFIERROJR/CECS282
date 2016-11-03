//CECS 282
//Lab 6
//Francisco Fierro

#include "SafeArray.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

SafeArray::SafeArray(int l, int h){
	//set bounds, initialize array
	low = l;
	high = h;
	array = new int[high - low + 1];
	for(int i = low ; i <=high; i++){
		array[i - low] = 1;
	}
}

SafeArray::SafeArray(int a[5]){
	low = 0;
	high = 5-1;
	array = new int[high - low + 1];
	for(int i = low ; i <=high; i++){
		array[i - low] = a[i];
	}
}


SafeArray::~SafeArray(){
	delete[] array;
}

int& SafeArray::operator[](int i){
	int index;
	if(i < low || i >high){
		cout << "Error: INDEXOUTOFBOUNDS" << endl;
		exit(0);
	}
	index = i - low;
	return array[index];
}

void SafeArray::print(){
	for(int i = low ; i <=high; i++){
		cout << "array[" << i << "] = " << array[i - low]<< endl;
	}
}