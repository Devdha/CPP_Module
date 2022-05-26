#include "AMateria.hpp"

#include <iostream>
#include <string>

AMateria::AMateria() : _type("") {}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::AMateria(const AMateria& src) : _type(src._type) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& src) {
  _type = src._type;

  return *this;
}

std::string const& AMateria::getType() const { return _type; }

void AMateria::use(ICharacter& target) {
  std::cout << "AMateria didn't set yet (" << target.getName() << ")"
            << std::endl;
}