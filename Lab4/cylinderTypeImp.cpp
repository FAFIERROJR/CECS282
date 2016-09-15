//lab 42
//Francisco Fierro

#include <iostream>
#include "cylinderType.h"

using namespace std;

void cylinderType::print() const{
	cout << "Base Center: ";
	circleType::pointType::print();
	cout << "Base Radius: " << circleType::getRadius() << endl;
	cout << "Base Circumference: " << circleType ::getCircumference() << endl;
	cout << "Base Area: " << circleType::getArea() << endl;
	cout << "Cylinder height: " << getHeight() << endl;
	cout << "Cylinder surface area: " << getSurfaceArea() << endl;
	cout << "Cylinder volume: " << getVolume() << endl;
}

void cylinderType::setHeight(double h){
	height = h;
}

void cylinderType::setBaseCenter(double x, double y){
	xCoordinate = x;
	yCoordinate = y;
}

void cylinderType::setCenterRadiusHeight(double x, double y,
	double r, double h){
	xCoordinate = x;
	yCoordinate = y;
	radius = r;
	setHeight(h);
}	

double  cylinderType::getHeight() const{
	return height;
}

double cylinderType::getVolume() const{
	return 3.14 * radius *radius * height;
}

double cylinderType::getSurfaceArea() const{
		return ( 2 * 3.1416 * radius * height) + 
			(2 * 3.1416 * radius * radius);
}

cylinderType :: cylinderType(double x, double y,
	double r, double h): circleType(x,y,r), height(h){}