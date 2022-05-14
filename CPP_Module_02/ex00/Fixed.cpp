#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default Constructor Called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& old) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this = old;
}

Fixed::~Fixed() {
	std::cout << "Destructor Called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Copy Assignment Operator Called" << std::endl;
	_value = src._value;
	return *this;
}

int Fixed::getRawBits() const {
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}