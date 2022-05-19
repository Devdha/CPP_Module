#include "Point.hpp"
#include <iostream>

float sine(Point const p1, Point const p2, Point const p3) {
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float   d1, d2, d3;
    bool    neg, pos;

    d1 = sine(point, a, b);
    d2 = sine(point, b, c);
    d3 = sine(point, c, a);

    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;
    neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(neg && pos);
}