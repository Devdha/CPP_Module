#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
  _hitPoints = S_HP;
  _energyPoints = S_EP;
  _attackDamage = S_AD;
  _maxHP = S_HP;
  _isKeeper = false;
  std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _hitPoints = S_HP;
  _energyPoints = S_EP;
  _attackDamage = S_AD;
  _maxHP = S_HP;
  _isKeeper = false;
  std::cout << "ScavTrap String constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
  const std::string* tmp = &_name;

  *(const_cast<std::string*>(tmp)) = src._name;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
  _maxHP = src._maxHP;
  std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
  const std::string* tmp = &_name;

  *(const_cast<std::string*>(tmp)) = src._name;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
  _maxHP = src._maxHP;

  return *this;
}

void ScavTrap::attack(const std::string& target) {
  if (_energyPoints && _hitPoints) {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
  } else
    std::cout << "ScavTrap " << _name << " no hit or energy point left"
              << std::endl;
}