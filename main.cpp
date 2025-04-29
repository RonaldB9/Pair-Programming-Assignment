#include <iostream>
#include <assert.h>
using namespace std;
#include "Point.h"
#include "Line.h"

void createPoint();
void createLine();

int main()
{
    createPoint();
    createLine();
    cout << "All Tests Passed!" << endl;
    return 0;
}

void createPoint()
{
    Point point1(1.2, 3.4);
    assert(point1.getCoords() == "X: 1.2, Y: 3.4");
    Point point2(1.0, 1.0);
    assert(point2.getCoords() == "X: 1.0, Y: 1.0");
    Point point3(1.25, 1.21);
    assert(point3.getCoords() == "X: 1.3, Y: 1.2");
    Point point4(11.325, 45.663);
    assert(point4.getCoords() == "X: 11.3, Y: 45.7");
}

void createLine() {
    Line line1(1.1, 2.2, 3.3, 4.4);
    cout << line1.getPoints();
    Line line2(2.1, 3.2, 4.3, 5.4);
    assert(line1.isParall(line1, line2) == true);
    Line line3(1, 1, 4, 4);
    Line line4(4, 1, 1, 4);
    assert(line1.isParall(line3, line4) == false);

    //length tests
    Line line5(11.0, 1.0, 11.0, 12.0);
    assert(line5.calculateLength() == 11.0);
    Line line6 (0.0, 0.0, 0.0, 0.0);
    assert(line6.calculateLength() == 0.0);
}
