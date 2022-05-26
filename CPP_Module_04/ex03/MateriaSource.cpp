#include "MateriaSource.hpp"

#include <iostream>
#include <string>

MateriaSource::MateriaSource() {
  for (int i = 0; i < SLOT_MAX; i++)
    _arr[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& src) {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (src._arr[i])
      _arr[i] = src._arr[i]->clone();
    else
      _arr[i] = NULL;
  }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (_arr[i]) {
      delete _arr[i];
      _arr[i] = NULL;
    }
    if (src._arr[i])
      _arr[i] = src._arr[i]->clone();
  }

  return *this;
}
MateriaSource::~MateriaSource() {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (_arr[i])
      delete _arr[i];
  }
}

void MateriaSource::learnMateria(AMateria* m) {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (_arr[i])
      continue;
    _arr[i] = m;
    return;
  }
  std::cout << "Learn failed(There's no empty slot of Materia Source)"
            << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (_arr[i] && _arr[i]->getType() == type)
      return _arr[i]->clone();
  }
  std::cout << "Create failed(given type is unknown)" << std::endl;
  return 0;
}