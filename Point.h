#pragma once
#include <string>
using namespace std;

class Point
{
public:
	Point(double x, double y);
	string getCoords();
	double getX();
	double getY();
private:
	double roundDoubles(double number);
	string addDecimal(string num);
	double xCoord;
	double yCoord;
};