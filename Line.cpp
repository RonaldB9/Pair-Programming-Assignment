#include "Line.h"

Line::Line(double x1, double y1, double x2, double y2) : point1(x1, y1), point2(x2, y2){}

string Line::getPoints() {
    return "Point 1: [" + point1.getCoords() + "], Point 2: [" + point2.getCoords() + "]"; 
}