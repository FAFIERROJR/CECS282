//CECS 282
//Lab 7
//Francisco Fierro

#ifndef H_POLAR
#define H_POLAR

#include "Cartesian.h"

class Cartesian;

class Polar{
	protected:
		double radius;
		double angle;

	public:
		Polar();
		Polar(double, double);
		void display();
		double getAngle();
		double getRadius();
		Polar operator +(Polar);
};

#endif