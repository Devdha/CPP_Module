#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
  std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
  _type = src._type;
  std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
  _type = src._type;
  return *this;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal Sooooound!!!" << std::endl;
}

const std::string& WrongAnimal::getType() const { return _type; }
