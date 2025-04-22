#include <iostream>
#include <assert.h>
using namespace std;
#include "Point.h";

void createPoint();

int main()
{
    createPoint();
    cout << "All Tests Passed!" << endl;
    return 0;
}

void createPoint()
{
    Point point1(1.2, 3.4);
    assert(point1.getCoords() == "X: 1.2, Y: 3.4");

}
