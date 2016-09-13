//Francisco Fierro
//Lab 32

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

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
    float average = ((float)sum) / ((float)size);
    int avg = round(average);
    
    return avg;
}

//classify and display each month's rainfall
void classifyAndDisplayRainfall(float rainFall[], int months){
    const int LEFT_COLUMN_SIZE =15;
    const int MIDDLE_COLUMN_SIZE = 15;
    const int RIGHT_COLUMN_SIZE =  15;
    
    //calculate average rainfall
    int average = calculateRainfall(rainFall, months);   

    //find min
    int low = 0;
    for(int i = 1; i < months; i++){
        if(rainFall[low] > rainFall[i]){
            low = i;
        }
    }

    string lowMonth;
    
    switch(low){
        case 0:
            lowMonth = "January";
            break;
        case 1:
            lowMonth = "February";
            break;
        case 2:
            lowMonth = "March";
            break;
        case 3:
            lowMonth = "April";
            break;
        case 4:
            lowMonth = "May";
            break;
        case 5:
            lowMonth = "June";
            break;
        case 6:
            lowMonth = "July";
            break;
        case 7:
            lowMonth = "August";
            break;
        case 8:
            lowMonth = "September";
            break;
        case 9:
            lowMonth = "October";
            break;
        case 10:
            lowMonth = "November";
            break;
        case 11:
            lowMonth = "December";
            break;
    }

    //find max
    int high = 0;
    for(int i = 1; i < months; i++){
        if(rainFall[high] < rainFall[i]){
            high = i;
        }
    }
    
    string highMonth;

    switch(high){
        case 0:
            highMonth = "January";
            break;
        case 1:
            highMonth = "February";
            break;
        case 2:
            highMonth = "March";
            break;
        case 3:
            highMonth = "April";
            break;
        case 4:
            highMonth = "May";
            break;
        case 5:
            highMonth = "June";
            break;
        case 6:
            highMonth = "July";
            break;
        case 7:
            highMonth = "August";
            break;
        case 8:
            highMonth = "September";
            break;
        case 9:
            highMonth = "October";
            break;
        case 10:
            highMonth = "November";
            break;
        case 11:
            highMonth = "December";
            break;
    }
    

    //Display avg, high, low
    cout << "The year's average monthly rainfall was " << average << " mm" << endl;
    cout << highMonth << " had the highest rainfall (" << rainFall[high] << " mm)" << endl;
    cout << lowMonth << " had the lowest rainfall (" << rainFall[low] << " mm)" << endl;

    //stores arbitrary deviation from average
    const int DEVIATION = int(average * .20);

    //display column titles
    cout << setw(LEFT_COLUMN_SIZE) << "MONTH" << setw(MIDDLE_COLUMN_SIZE) << "RAINFALL(mm)"
        <<setw(RIGHT_COLUMN_SIZE) << "Classification" << endl;

    //display column borders
    cout << setw(LEFT_COLUMN_SIZE) << "-----" << setw(MIDDLE_COLUMN_SIZE) << "------------"
        <<setw(RIGHT_COLUMN_SIZE) << "--------------" << endl; 

    //display month, rainfall, classification for each month
    cout << fixed << setprecision(0);
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
