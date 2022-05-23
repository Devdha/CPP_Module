#include "Dog.hpp"

#include <iostream>

#include "Animal.hpp"

Dog::Dog() : Animal() {
  _type = "Dog";
  std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
  _type = src._type;
  std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog() { std::cout << "Dog Destructor called" << std::endl; }

Dog& Dog::operator=(const Dog& src) {
  Animal::operator=(src);
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Bark! Bark!(Dog sound)" << std::endl;
}