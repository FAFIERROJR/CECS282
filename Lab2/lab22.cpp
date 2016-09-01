/* Francisco Fierro
   CECS 282
   Lab 2
   lab22.cpp */

#include <iomanip>
#include <iostream>

using namespace std;

//validates whether a number is a perfect number
bool validate(int);

int main(){
    //loop until user exits
    while(true){
        //will contain user entered integer
        int input = 0;
        //only accept valid input
        while(input <= 0) {
            cout << "Enter a positive integer (or -1 to exit): ";
            cin >> input;
            if(input == -1){
                return 0;
            }
        }
    
        //determine if input is perfect number    
        if(validate(input)){
            cout << input << " is a perfect number" << endl;
        }
        else{
            cout << input << " is not a perfect number" << endl;
        }
    }
    return 0;
}

bool validate (int in){
    //will contain sum of factors
    int sum = 0;
    for(int i = 1; i <= (int) in/2; i++){
        if(in % i == 0){
            sum = sum + i;
        }
    }
    if(sum == in){
        return true;
    }
    return false;
}
