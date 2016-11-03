//CECS 282
//Lab 6
//Francisco Fierro

#include <iostream>
#include <math.h>
#include "Polar.h"
#include "Cartesian.h"

using namespace std;

Polar::Polar(){
	radius = 0;
	angle = 0;
}

Polar::Polar(double r, double a): radius(r), angle(a){}

void Polar::display(){
	cout << "(" << radius << ", " << angle << ")" << endl;
}

double Polar::getAngle(){
	return angle;
}
		
double Polar::getRadius(){
	return radius;

}

Polar Polar::operator +(Polar p){
	Polar result;

	//use cartesian objs
	Cartesian c1 = *this;
	Cartesian c2 = p;

	Cartesian c = c1 + c2;

	//convert rect to polar coord
	result.radius = sqrt(c.getX() * c.getX() + c.getY() * c.getY());
	result.angle = atan(c.getY()/c.getX());

	return result;
}
