#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() {
	_value = 0;
}

Fixed::Fixed(const Fixed& old) {
	*this = old;
}

Fixed::~Fixed() {
}

Fixed&  Fixed::operator=(const Fixed& src) {
	_value = src.getRawBits();
	return *this;
}

Fixed::Fixed(const int value) {
    _value = value * (1 << _numOfBits);
}

Fixed::Fixed(const float value) {
    _value = roundf(value * (1 << _numOfBits));
}

// Comparison operator
bool	Fixed::operator>(const Fixed& fixed) {
	return _value > fixed._value;
}

bool	Fixed::operator<(const Fixed& fixed) {
	return _value < fixed._value;
}

bool	Fixed::operator>=(const Fixed& fixed) {
	return _value >= fixed._value;
}

bool	Fixed::operator<=(const Fixed& fixed) {
	return _value <= fixed._value;
}

bool	Fixed::operator==(const Fixed& fixed) {
	return _value == fixed._value;
}

bool	Fixed::operator!=(const Fixed& fixed) {
	return _value != fixed._value;
}

// Arithmetic operator
Fixed	Fixed::operator+(const Fixed& fixed) {
	Fixed tmp;

	tmp._value = _value + fixed._value;
	return tmp;
}

Fixed	Fixed::operator-(const Fixed& fixed) {
	Fixed tmp;

	tmp._value = _value - fixed._value;
	return tmp;
}

Fixed	Fixed::operator*(const Fixed& fixed) {
	Fixed tmp = Fixed(toFloat() * fixed.toFloat());

	return tmp;
}

Fixed	Fixed::operator/(const Fixed& fixed) {
	Fixed tmp = Fixed(toFloat() / fixed.toFloat());
	
	return tmp;
}

// Incre/decrement operator
Fixed&	Fixed::operator++() {
	_value++;
	return *this;
}

Fixed	Fixed::operator++(int i) {
	Fixed tmp;

	(void) i;
	tmp._value = _value;
	_value++;
	return tmp;
}

Fixed&	Fixed::operator--() {
	_value--;
	return *this;
}

Fixed	Fixed::operator--(int i) {
	Fixed tmp;

	(void) i;
	tmp._value = _value;
	_value--;
	return tmp;
}

// Min/max funcs
Fixed& Fixed::min(Fixed& f1, Fixed& f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2) {
	return f1._value < f2._value ? f1 : f2;
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2) {
	return f1 > f2 ? f1 : f2;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2) {
	return f1._value > f2._value ? f1 : f2;
}

// from ex01
int     Fixed::toInt() const {
    return _value / (1 << _numOfBits);
}

float   Fixed::toFloat() const {
    return static_cast<float>(_value) / (1 << _numOfBits);
}

int     Fixed::getRawBits() const {
	return _value;
}

void    Fixed::setRawBits(int const raw) {
	_value = raw;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed) {
    return (out << fixed.toFloat());
}