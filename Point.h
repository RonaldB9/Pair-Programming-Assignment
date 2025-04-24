#pragma once
#include <string>
using namespace std;

class Point
{
public:
	Point(double x, double y);
	string getCoords();
private:
	double roundDoubles(double number);
	double xCoord;
	double yCoord;
};