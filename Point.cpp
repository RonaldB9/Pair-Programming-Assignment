#include "Point.h"
#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
Point::Point(double x, double y) {
	xCoord = x;
	yCoord = y;
}
string Point::getCoords() {
	xCoord = roundDoubles(xCoord);
	yCoord = roundDoubles(yCoord);
	stringstream sx;
	stringstream sy;
	sx << fixed << setprecision(1) << xCoord;
	sy << fixed << setprecision(1) << yCoord;

	return("X: " + sx.str() + ", Y: " + sy.str());
}

double Point::roundDoubles(double number) {
	number *= 10.0;
	number = round(number);
	number /= 10.0;
	return number;
}
