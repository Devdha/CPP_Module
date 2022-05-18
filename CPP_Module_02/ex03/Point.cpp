#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::~Point() {}

Point::Point(const Point& old) : x(old.x), y(old.y) {}

Point& Point::operator=(const Point& src) {
    const Fixed* x = &(this->x);
    const Fixed* y = &(this->y);

    *(const_cast<Fixed*>(x)) = src.x;
    *(const_cast<Fixed*>(y)) = src.y;

    return (*this);
}

float Point::getX() const {
    return x.toFloat();
}

float Point::getY() const {
    return y.toFloat();
}