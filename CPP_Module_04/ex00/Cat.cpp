#include "Cat.hpp"

#include <iostream>

#include "Animal.hpp"

Cat::Cat() {
  _type = "Cat";
  std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& src) {
  _type = src._type;
  std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() { std::cout << "Cat Destructor called" << std::endl; }

Cat& Cat::operator=(const Cat& src) {
  _type = src._type;
  return *this;
}

void Cat::makeSound() const {
  std::cout << "Meow~ Meow~(Cat sound)" << std::endl;
}