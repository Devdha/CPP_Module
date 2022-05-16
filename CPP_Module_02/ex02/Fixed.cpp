#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& old) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(const Fixed& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	_value = src.getRawBits();
	return *this;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value * (1 << _numOfBits);
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _numOfBits));
}

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

Fixed	Fixed::operator+(const Fixed& fixed) {
	
}

Fixed	Fixed::operator-(const Fixed& fixed) {

}

Fixed	Fixed::operator*(const Fixed& fixed) {

}

Fixed	Fixed::operator/(const Fixed& fixed) {
	
}

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