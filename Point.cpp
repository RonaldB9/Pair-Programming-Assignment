#include "Point.h"
#include <iostream>
#include <cmath>
#include <sstream>
Point::Point(double x, double y) {
	xCoord = x;
	yCoord = y;
}
string Point::getCoords() {
	xCoord = roundDoubles(xCoord);
	yCoord = roundDoubles(yCoord);
	stringstream sx;
	stringstream sy;
	sx << xCoord; 
	sy << yCoord;
	string xCoordString;
	sx >> xCoordString;
	//cout << xCoordString << endl;
	string yCoordString;
	sy >> yCoordString;
	//cout << yCoordString << endl;

	return("X: "+addDecimal(xCoordString)+ ", Y: " + addDecimal(yCoordString));
}

double Point::roundDoubles(double number) {
	number *= 10.0;
	number = round(number);
	number /= 10.0;
	return number;
}

string Point::addDecimal(string num) {
	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '.') {
			return num;
		}
	}
	return num += ".0";
}

double Point::getX () {
	return xCoord;
}

double Point::getY () {
	return yCoord;
}