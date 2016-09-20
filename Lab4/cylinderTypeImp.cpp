//lab 42
//Francisco Fierro

#include <iostream>
#include "cylinderType.h"

using namespace std;

//prints cylinder info
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

//sets height
void cylinderType::setHeight(double h){
	height = h;
}

//sets center x and y coordinates
void cylinderType::setBaseCenter(double x, double y){
	xCoordinate = x;
	yCoordinate = y;
}

//sets center, radius and height
void cylinderType::setCenterRadiusHeight(double x, double y,
	double r, double h){
	xCoordinate = x;
	yCoordinate = y;
	radius = r;
	setHeight(h);
}	

//returns height
double  cylinderType::getHeight() const{
	return height;
}

//calcs volume
double cylinderType::getVolume() const{
	return 3.14 * radius *radius * height;
}

//calcs surface area
double cylinderType::getSurfaceArea() const{
		return ( 2 * 3.1416 * radius * height) + 
			(2 * 3.1416 * radius * radius);
}

//constructor
cylinderType :: cylinderType(double x, double y,
	double r, double h): circleType(x,y,r), height(h){}