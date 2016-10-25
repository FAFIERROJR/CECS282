#include <iostream>
#include "Polar.h"

using namespace std;

int main()
{
Polar p1(10.0, 0.0); //line to the right
Polar p2(10.0, 1.570796325); //line straight up
Polar p3; //uninitialized Polar

p3 = p1 + p2; //add two Polars

cout << "\np1="; p1.display(); //display all Polars
cout << "\np2="; p2.display();
cout << "\np3="; p3.display();
cout << endl;
return 0;
}