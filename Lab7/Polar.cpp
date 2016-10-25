#include <iostream>
#include <math.h>
#include "Polar.h"

using namespace std;

Polar::Polar(){
	radius = 0;
	angle = 0;
}

Polar::Polar(float r, float a): radius(r), angle(a){}

void Polar::display(){
	cout << "(" << radius << ", " << angle << ")" << endl;
}

Polar operator +(Polar& p1, Polar& p2){
	float x1 = p1.radius * cos(p1.angle);
	float y1 = p1.radius * sin(p1.angle);

	float x2 = p2.radius * cos(p2.angle);
	float y2 = p2.radius * sin(p2.angle);

	float x3 = x1 + x2;
	float y3 = y1 + y2;

	float newRadius = sqrt(x3 * x3 + y3 * y3);
	float newAngle = atan(y3/x3);

	return Polar(newRadius, newAngle);
}