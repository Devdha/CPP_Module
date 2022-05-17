#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    Point(const float x, const float y);
    Point(const Point& old);
    Point&  operator=(const Point& src);
    ~Point();
    float getX() const;
    float getY() const;
};

#endif