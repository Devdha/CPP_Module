#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& src) : AMateria(src) {}

Ice& Ice::operator=(const Ice& src) {
  _type = src._type;

  return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
  Ice* clone = new Ice(*this);

  return clone;
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}