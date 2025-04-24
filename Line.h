#pragma once
#include "Point.h"
using namespace std;

class Line {

    public:
        Line(double x1, double y1, double x2, double y2);
        string getPoints();
    private:
        Point point1;
        Point point2;
    };