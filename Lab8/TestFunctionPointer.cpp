//Fancisco Fierro
//Lab 8

#include <iostream>
#include <string.h>

using namespace std;

void bubble_sort(int * array, int size, void (*f)(int * , int *));
void asc(int *num1, int *num2);
void dsc(int *num1, int *num2);

int main(){
	int * array = new int[20];
	int size = 0;
	char again = 'y';
	while(again == 'y'){
		cout << "Enter an integer" << endl;
		cin >> array[size];
		size++;
		cout << "Enter another?(y/n)" << endl;
		cin >>again;
	}

	cout << "Unsorted" << endl;
	for(int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << "\n";

	bubble_sort(array, size, asc);

	cout << "Ascending Order" << endl;
	for(int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << "\n";

	bubble_sort(array, size, dsc);

	cout << "Descending Order" << endl;
	for(int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << "\n";


}

void bubble_sort(int * array, int size, void (*f)(int *, int *)){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size -1; j++){
			f(array + j, array + j + 1);
		}
	}
}
void asc(int *num1, int *num2){
	if(*num2 < *num1){
		int temp = *num1;
		*num1 = *num2;
		*num2 = temp;
	}
}
void dsc(int *num1, int *num2){
	if(*num2 > *num1){
		int  temp = * num1;
		*num1 = *num2;
		*num2 = temp;
	}
}