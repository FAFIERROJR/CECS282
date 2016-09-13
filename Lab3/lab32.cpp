//Francisco Fierro
//Lab 32

#include <iostream>
#define ROWS 4
#define COLS 5

using namespace std;

//declare prototypes
int getTotal(int testArray[][COLS], int rows, int cols);
float getAverage(int testArray[][COLS], int rows, int cols);
int getRowTotal(int testArray[][COLS], int row, int cols);
int getColumnTotal(int testArray[][COLS], int col, int rows);
int getHighestInRow(int testArray[][COLS], int row, int cols);
int getLowestInRow(int testArray[][COLS], int row, int cols);

int main()
{
// Array with test data
int testArray[ROWS][COLS] =
{ 
{ 1, 2, 3, 4, 5 },
{ 6, 7, 8, 9, 10 },
{ 11, 12, 13, 14, 15 },
{ 16, 17, 18, 19, 20 }
};

// Display the total of the array elements.
cout << "The total of the array elements is "
<< getTotal(testArray, ROWS, COLS)
<< endl;

// Display the average of the array elements.
cout << "The average value of an element is "
<< getAverage(testArray, ROWS, COLS)
<< endl;

// Display the total of row 0.
cout << "The total of row 0 is "
<< getRowTotal(testArray, 0, COLS)
<< endl;

// Display the total of column 2.
cout << "The total of col 2 is "
<< getColumnTotal(testArray, 2, ROWS)
<< endl;

// Display the highest value in row 2. 
cout << "The highest value in row 2 is "
<< getHighestInRow(testArray, 2, COLS)
<< endl;

// Display the lowest value in row 2.
cout << "The lowest value in row 2 is "
<< getLowestInRow(testArray, 2, COLS)
<< endl;

return 0;
}

int getTotal(int testArray[][COLS], int rows, int cols){
    int total = 0;
    //iterate through rows
    for(int i = 0; i < rows; i++){
        //iterate through cols
        for(int j = 0; j < cols; j++){
            //total up
            total += testArray[i][j];
        }
    }
    return total;
}

float getAverage(int testArray[][COLS], int rows, int cols){
    float average;
    float total;
    
    //get total first
    total = float(getTotal(testArray,rows,cols));
    
    //divide by number of elements => rows * cols
    average = total/(rows * cols);
    
    return average;
}

int getRowTotal(int testArray[][COLS], int row, int cols){
    int rowTotal = 0;

    //iterate through each column in row
    for(int i = 0; i < cols; i++){
        //run a sum
        rowTotal += testArray[row][i];
    }

    return rowTotal;
}

int getColumnTotal(int testArray[][COLS], int col, int rows){
    int colTotal = 0;

    //iterate through each row in column
    for(int i = 0; i < rows; i++){
        //run a sum
        colTotal += testArray[i][col];
    }
    
    return colTotal;
}

int getHighestInRow(int testArray[][COLS], int row, int cols){
    int rowMax = testArray[row][0];

    //iterate through each column in row
    for(int i = 1; i < cols; i++){
        //store the max so far
        if(rowMax < testArray[row][i]){
            rowMax = testArray[row][i];
        }
    }

    return rowMax;
}

int getLowestInRow(int testArray[][COLS], int row, int cols){
    //intialize min to first element
    int rowMin = testArray[row][0];

    //iterate through each column in row
    for(int i = 1; i < cols; i++){
        //store the min so far
        if(rowMin > testArray[row][i]){
            rowMin = testArray[row][i];
        }
    }

    return rowMin;
}
