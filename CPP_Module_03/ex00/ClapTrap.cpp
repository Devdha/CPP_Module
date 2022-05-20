#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
    : _name("no_name"), _hitPoints(HP), _energyPoints(EP), _attackDamage(AD) {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(HP), _energyPoints(EP), _attackDamage(AD) {
  std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : _name(src._name) {
  std::cout << "Copy constructor called" << std::endl;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called" << std::endl; }

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
  const std::string* tmp = &_name;

  *(const_cast<std::string*>(tmp)) = src._name;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;

  return *this;
}

void ClapTrap::attack(const std::string& target) {
  if (_energyPoints && _hitPoints) {
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
  } else
    std::cout << "ClapTrap " << _name << " no hit or energy point left"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (_hitPoints) {
    if (_hitPoints < amount) {
      _hitPoints = 0;
    } else {
      _hitPoints -= amount;
    }
    std::cout << "ClapTrap " << _name << " has taken " << amount << " damages"
              << std::endl;
  } else
    std::cout << "ClapTrap " << _name << " already no hit point left"
              << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_energyPoints && _hitPoints) {
    if (_hitPoints + amount > HP)
      _hitPoints = HP;
    else
      _hitPoints += amount;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " has been repaired " << amount
              << " hit points" << std::endl;
  } else
    std::cout << "ClapTrap " << _name << " no hit or energy point left"
              << std::endl;
}