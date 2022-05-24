#include "Animal.hpp"

#include <iostream>

Animal::Animal() : _type("Animal") {
  std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& src) {
  _type = src._type;
  std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal() { std::cout << "Animal Destructor called" << std::endl; }

Animal& Animal::operator=(const Animal& src) {
  _type = src._type;
  return *this;
}

const std::string& Animal::getType() const { return _type; }
