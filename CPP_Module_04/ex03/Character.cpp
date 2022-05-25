#include "Character.hpp"

#include <iostream>

Character::Character() : _name("no_name") {
  for (int i = 0; i < SLOT_MAX; i++)
    _arr[i] = NULL;
}

Character::Character(std::string name) : _name(name) {
  for (int i = 0; i < SLOT_MAX; i++)
    _arr[i] = NULL;
}

Character::Character(const Character& src) : _name(src._name) {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (src._arr[i])
      _arr[i] = src._arr[i]->clone();
    else
      _arr[i] = NULL;
  }
}

Character& Character::operator=(const Character& src) {
  _name = src._name;

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

Character::~Character() {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (_arr[i])
      delete _arr[i];
  }
}

std::string const& Character::getName() const { return _name; }

void Character::equip(AMateria* m) {
  for (int i = 0; i < SLOT_MAX; i++) {
    if (_arr[i])
      continue;
    _arr[i] = m;
    return;
  }
  std::cout << "Equip failed(There's no empty slot of " << _name << ")"
            << std::endl;
}

void Character::unequip(int idx) {
  if (_arr[idx]) {
    _arr[idx] = NULL;
    return;
  }
  std::cout << "_arr[" << idx << "] of " << _name << " is already empty"
            << std::endl;
}

void Character::use(int idx, ICharacter& target) {
  if (_arr[idx]) {
    _arr[idx]->use(target);
    return;
  }
  std::cout << "There's no item on _arr[" << idx << "] of " << _name
            << std::endl;
}
