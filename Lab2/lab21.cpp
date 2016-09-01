/* Francisco Fierro
   CECS 282
   Lab 2
   lab21.cpp */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int perfectNum;
    //will hold potential perfectNum
    int candidate = 2;
    
    //loop four times to find four perfect nums
    for(int i = 0; i < 4; i ++){
        //used to exit while loop when perfect num found
        bool isPerfect = false;
        //sum of perfect factors
        int sum;
        ///loop until a perfect num is found
        while(!isPerfect){
            isPerfect = false;
            sum = 0;
            //loop until all perfect divisors are found
            for(int j = 1; j <= (int) candidate /2; j++){
                if(candidate % j == 0){
                    //add them up
                    sum += j;
                }
            }
            //if perfect number
            if(sum == candidate)
                perfectNum= candidate;
                isPerfect = true;
            }
            candidate++;
        }
        //print out the perfect number
        cout << "Perfect Number " << i + 1 << ": " << perfectNum << endl;
    }

    return 0;
}

