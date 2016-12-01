//Francisco Fierro
//Lab 9

#include <iostream>

using namespace std;

float *allocate(int rows, int cols);
void readm(float *matrix, int rows, int cols);
void writem(float *matrix, int rows, int cols);
void multmatrix(float* matrix1, int rows1, int cols1, float *matrix2, int rows2, int cols2, float* product);

int main(){
	cout << "Enter number of rows for matrix 1" << endl;
	int rows1;
	cin >> rows1;
	cout << "Enter number of cols for matrix 1" << endl;
	int cols1;
	cin >> cols1;

	float* matrix1 = allocate(rows1, cols1);
	readm(matrix1, rows1, cols1);

	int rows2;
	do{
		cout <<"Enter number of rows for matrix 2" << endl;
		cin >> rows2;
		if(rows2 != cols1){
			cout <<"ERROR: The number of rows for matrix 2 must be equal to the number fo cols of matrix 1 for multiplication to be possible" << endl;
		}
	}while(rows2 != cols1);

	cout << "Enter number of cols for matrix 2" << endl;
	int cols2;
	cin >> cols2;

	float* matrix2 = allocate(rows2, cols2);
	readm(matrix2, rows2, cols2);

	cout << "Entered Matrices: " << endl;
	writem(matrix1, rows1, cols1);
	writem(matrix2, rows2, cols2);

	float * product = NULL;
	if(rows2 == cols1){
		product = allocate(rows1, cols2);
		multmatrix(matrix1, rows1, cols1, matrix2, rows2, cols2, product);
	}
	if(product){
		writem(product, rows1, cols2);
	}

}

float* allocate(int rows, int cols){
	float *fptr = new float[rows * cols];
	return fptr;
}
void readm(float *matrix, int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << "Enter a float for cell " << i << "_" << j << endl;
			cin >> matrix[i*cols + j];
		}
		cout << endl;
	}
}
void writem(float *matrix, int rows, int cols){
	cout << "[" << endl;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << matrix[i* cols + j] << ", ";
		}
		cout << endl;
	}
	cout << "]" << endl;
}
void multmatrix(float* matrix1, int rows1, int cols1, float *matrix2, int rows2, int cols2, float* product){
		int i, j, k;
		for(i = 0; i < rows1; i++){
			for(j = 0; j < cols2; j++){
				for(k = 0,*product = 0; k < cols1; k++){
					*product += matrix1[i* cols1 + k] * matrix2[k * cols2 + j];
				}
				product++;
			}
		}

}