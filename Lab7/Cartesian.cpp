//CECS 282
//Lab 7
//Francisco Fierro

#include <iostream>
#include <math.h>
#include "Polar.h"
#include "Cartesian.h"

using namespace std;

Cartesian::Cartesian(){
	xCoor = 0;
	yCoor = 0;
}
Cartesian::Cartesian(double x, double y): xCoor(x), yCoor(y){}

Cartesian::Cartesian(Polar p){
	//convert polar to rect coor
	xCoor = p.getRadius() * cos(p.getAngle());
	yCoor = p.getRadius() * sin(p.getAngle());

}

double Cartesian::getX(){
	return xCoor;
}

double Cartesian::getY(){
	return yCoor;
}

Cartesian operator +(Cartesian c1, Cartesian c2){
	Cartesian result;
	//add rect coor
	result.xCoor = c1.xCoor + c2.xCoor;
	result.yCoor = c2.yCoor + c1.yCoor;
	return result;
}

Cartesian Cartesian::operator =(Polar p){
	//convert polar to rect coor
	xCoor = p.getRadius() * cos(p.getAngle());
	yCoor = p.getRadius() * sin(p.getAngle());
	return Cartesian(xCoor, yCoor);
