#include "Cat.hpp"

#include <iostream>

#include "Animal.hpp"

Cat::Cat() : Animal(), _brain(new Brain()) {
  _type = "Cat";
  std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src), _brain(new Brain(*src._brain)) {
  _type = src._type;
  std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
  delete _brain;
}

Cat& Cat::operator=(const Cat& src) {
  Animal::operator=(src);
  if (_brain)
    delete _brain;
  _brain = new Brain(*src._brain);
  return *this;
}

void Cat::makeSound() const {
  std::cout << "Meow~ Meow~(Cat sound)" << std::endl;
}