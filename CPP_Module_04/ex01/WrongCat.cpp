#include "WrongCat.hpp"

#include <iostream>

#include "WrongAnimal.hpp"

WrongCat::WrongCat() {
  _type = "WrongCat";
  std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {
  _type = src._type;
  std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
  WrongAnimal::operator=(src);
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "Meow~ Meow~(WrongCat sound)" << std::endl;
}