//CECS 282
//Lab 7
//Francisco Fierro
//
#ifndef H_CARTESIAN
#define H_CARTESIAN

#include "Polar.h"

class Polar;

class Cartesian{
protected:
	double xCoor;
	double yCoor;

public:
	Cartesian();
	Cartesian(double, double);
	Cartesian(Polar);
	double getX();
	double getY();
	friend Cartesian operator +(Cartesian, Cartesian);
	Cartesian operator =(Polar);
};

#endif