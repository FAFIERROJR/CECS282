/* Francisco Fierro
   CECS 282
   Lab 2
   lab23.cpp */

#include <iostream>
#include <iomanip>
#include <math.h>

#define COLSPACE 20

using namespace std;

//function prototypes
void displayColumnTitle();
float calculateBalanceDue(float, float);
void displayBalance(int, float);

int main(){
    while(true){
        //get info from user
        cout << "Enter account number (or -1 to exit): ";
        int accNum;
        cin >> accNum;
        if(accNum == -1){
            return 0;
        }

        cout << "Enter name: ";
        string name;
        cin.ignore();
        getline(cin, name);
        
        cout << "Enter balance due: ";
        float balanceDue;
        cin >> balanceDue;
    
        //calculate paymentAmt
        //ceil function prevents underpayment
        float paymentAmt = ceil(balanceDue * .10);

        //display output
        //account number and name
        cout << "Account Number: " << accNum << endl;
        cout << "Name: " << name << endl;
        
        //column titles
        displayColumnTitle();

        //monthly balances
        for(int i = 1; i <= 10; i++){
            //calcluate monthly balances
            balanceDue = calculateBalanceDue(balanceDue, paymentAmt);

            displayBalance(i, balanceDue);
        }

    }
}

//displayColumnTitle()
//'nuf said
void displayColumnTitle(){
    cout << setw(COLSPACE) << left << "MONTH";
    cout << setw(COLSPACE) << right << "BALANCE DUE" << endl;
}

//calculateBalanceDue
//simply decrement balanceDue by paymentAmt and return remainder
float calculateBalanceDue(float balanceDue, float paymentAmt){
    balanceDue = balanceDue - paymentAmt;
    //don't overpay
    if(balanceDue < 0){
        balanceDue = 0;
    }
    return balanceDue;
}

//displayBalance
//displays month number and balance, one at a time
void displayBalance(int month, float balanceDue){
        cout << setw(COLSPACE) <<left << month;
    cout << setw(COLSPACE) << fixed << setprecision(2) << showpoint << right << balanceDue  << endl;
}
