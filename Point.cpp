#include "Point.h"
#include <iostream>;
Point::Point(double x, double y) {
	xCoord = x;
	yCoord = y;
}
string Point::getCoords() {
	string xCoordString = to_string(xCoord);
	//xCoordString.erase(xCoordString.find_last_not_of('0') + 1, std::string::npos);
	//xCoordString.erase(xCoordString.find_last_not_of('.') + 1, std::string::npos);
	string yCoordString = to_string(yCoord);
	//yCoordString.erase(yCoordString.find_last_not_of('0') + 1, std::string::npos);
	//yCoordString.erase(yCoordString.find_last_not_of('.') + 1, std::string::npos);
	
	
	return("X: "+xCoordString+ ", Y: " + yCoordString);
}

double Point::roundDoubles(double number) {
	number += 0.05;
	number *= 10.0;
	number / 10.0;
	return number;
}