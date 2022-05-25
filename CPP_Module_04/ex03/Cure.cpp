#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& src) : AMateria(src) {}

Cure& Cure::operator=(const Cure& src) {
  _type = src._type;

  return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
  Cure* clone = new Cure(*this);

  return clone;
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}