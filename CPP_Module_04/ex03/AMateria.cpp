#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria() {
  std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::AMateria(const AMateria& src) : _type(src._type) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& src) {}

std::string const& AMateria::getType() const {}
