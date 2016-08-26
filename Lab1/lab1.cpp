/* Francisco Fierro
   CECS 282 LAB #1
   Fall 2016 
   lab1.c
   Calculates net pay given user-entered gross pay
*/
   

#include <iostream>
#include <iomanip>
#define STRING_SPACING 30
#define NUM_SPACING 15
using namespace std;

int main(){
    //Prompt for Gross Amount
    cout << left << "Enter Gross Amount: ";
    double grossAmount;
    cin >> grossAmount;
    cout << endl;

    //Constant Tax Rates
    const double FED_INC_TAX = 0.20;
    const double STATE_TAX = 0.04;
    const double SOC_TAX = 0.035;
    const double MED_TAX = 0.0275;
    const double PENSION = 0.06;
    //Constant Flat Rate
    const double HEALTH_INS = 80;

    //variables to store calculated deductions
    double fedTax = grossAmount * FED_INC_TAX;
    double stateTax = grossAmount * STATE_TAX;
    double socTax = grossAmount * SOC_TAX;
    double medTax = grossAmount * MED_TAX;
    double pens = grossAmount * PENSION;

    //Calculate net pay
    double netPay = grossAmount - (fedTax + stateTax + socTax + medTax + pens + HEALTH_INS);


    //Display output
    cout << left <<  setw(STRING_SPACING) << "Gross Amount: "
        << right << " $" 
        << setw(NUM_SPACING) << fixed << setprecision(2)  << showpoint << grossAmount << endl;

    cout << left <<  setw(STRING_SPACING) << "Federal Income Tax: "
        << right << " $" 
        << setw(NUM_SPACING) << fedTax << endl;

    cout << left <<  setw(STRING_SPACING) << "State Tax: "
        << right << " $" 
        << setw(NUM_SPACING) << stateTax << endl;

    cout << left <<  setw(STRING_SPACING) << "Social Security Tax: "
        << right << " $" 
        << setw(NUM_SPACING) << socTax << endl;

    cout << left <<  setw(STRING_SPACING) << "Pension: "
        << right << " $" 
        << setw(NUM_SPACING) << pens << endl;

    cout << left <<  setw(STRING_SPACING) << "Health Insurance: "
        << right << " $" 
        << setw(NUM_SPACING) << HEALTH_INS << endl;

    cout << left << setw(STRING_SPACING) << "Net Pay: " << right << " $"
         << setw(NUM_SPACING) << netPay << endl;

    return 0;
}
