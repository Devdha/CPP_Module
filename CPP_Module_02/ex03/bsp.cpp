#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

float sign(Point const p1, Point const p2, Point const p3) {
    bool result = (p1.getY() > ( p2.getY() - p3.getY() )/( p2.getX() - p3.getX() )*( p1.getX() - p3.getX() ) + p3.getY());
    std::cout << result << '\n';
    std::cout << p1.getX() << " - " << p3.getX() << " * " << p2.getY() << " - " << p3.getY() << ") - (" << p2.getX() << " - " << p3.getX() << " * " << p1.getY() << " - " << p3.getY() << std::endl; 
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float   d1, d2, d3;
    bool    neg, pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    std::cout << "test: " << d1 << " " << d2 << " " << d3 << std::endl;

    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;
    neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(neg && pos);
}