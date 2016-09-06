#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//declare prototypes
void inputRainfall(float rainFall[], int size);
int calculateRainfall(float rainFall[], int size);
void classifyAndDisplayRainfall(float rainFall[], int months);

int main(){
    int months = 12;
    float rainFall[months];

    inputRainfall(rainFall, months);
    classifyAndDisplayRainfall(rainFall, months);
}

//reads file into rainFall array
void inputRainfall(float rainFall[], int size){
    //Open the file
    ifstream inputFile;
    inputFile.open("rainfall.txt");
    //Initialize month counter
    int month = 0; //first month
    for(month = 0; month < size; month++){
        //Read the monthly rainfall in the file
        inputFile >> rainFall[month];
    }
}

//calculates average rainfall
int calculateRainfall(float rainFall[], int size){
    //run a sum
    int sum = 0;
    for(int month = 0; month < size; month++){
        sum += rainFall[month];
    }
    
    // divide by number of months
    int average = (int)(sum / size);
    
    return average;
}

//classify and display each month's rainfall
void classifyAndDisplayRainfall(float rainFall[], int months){
    const int LEFT_COLUMN_SIZE =15;
    const int MIDDLE_COLUMN_SIZE = 15;
    const int RIGHT_COLUMN_SIZE =  15;
    
    //calculate average rainfall
    int average = calculateRainfall(rainFall, months);   

    //stores arbitrary deviation from average
    const int DEVIATION = int(average * .20);

    //display column titles
    cout << setw(LEFT_COLUMN_SIZE) << "MONTH" << setw(MIDDLE_COLUMN_SIZE) << "RAINFALL(mm)"
        <<setw(RIGHT_COLUMN_SIZE) << "Classification" << endl;

    //display column borders
    cout << setw(LEFT_COLUMN_SIZE) << "-----" << setw(MIDDLE_COLUMN_SIZE) << "------------"
        <<setw(RIGHT_COLUMN_SIZE) << "--------------" << endl; 

    //display month, rainfall, classification for each month
    cout << fixed << showpoint << setprecision(2);
    for(int i = 0; i < months; i ++){
        cout << setw(LEFT_COLUMN_SIZE) << i + 1 << setw(MIDDLE_COLUMN_SIZE) << rainFall[i];
        
        cout << setw(RIGHT_COLUMN_SIZE);
        if(rainFall[i] < (int)(average  - DEVIATION))
            cout << "Dry" << endl;
        else  if(rainFall[i] > (int)(average + DEVIATION))
            cout << "Rainy" << endl;
        else
            cout << "Average" << endl;
    }
}
