#include "Line.h"
#include <cmath>

Line::Line(double x1, double y1, double x2, double y2) : point1(x1, y1), point2(x2, y2) {}


string Line::getPoints() {
    return "Point 1: [" + point1.getCoords() + "], Point 2: [" + point2.getCoords() + "]";
}
bool Line::isParall(Line checkLine1, Line checkLine2) {
    //check vertical
    double s1X1 = checkLine1.point1.getX();
    double s1Y1 = checkLine1.point1.getY();
    double s1X2 = checkLine1.point2.getX();
    double s1Y2 = checkLine1.point2.getY();
    double s2X1 = checkLine2.point1.getX();
    double s2Y1 = checkLine2.point1.getY();
    double s2X2 = checkLine2.point2.getX();
    double s2Y2 = checkLine2.point2.getY();
    if (s1X1 == s1X2 && s2X1 == s2X2) {
        //This checks if both lines are vertical
        return true;
    }
    if (s1X1 == s1X2 || s2X1 == s2X2) {
        //If one is vertical but the other is not.
        return false;
    }
    double slope1 = (s1Y2 - s1Y1) / (s1X2 - s1X1);
    double slope2 = (s2Y2 - s2Y1) / (s2X2 - s2X1);
    if (slope1 == slope2) {
        return true;
    }
    else {
        return false;
    }
}

double Line::calculateLength() {
    double x = point1.getX() - point2.getX();
    double y = point1.getY() - point2.getY();
    double length = sqrt((x * x) + (y * y));
    return length;
}

bool Line::isPointOnLine(Point point) {
    Line section1(point1.getX(), point1.getY(), point.getX(), point.getY());
    Line section2(point2.getX(), point2.getY(), point.getX(), point.getY());

    return true;
}