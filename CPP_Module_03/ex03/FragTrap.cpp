#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
  _hitPoints = F_HP;
  _energyPoints = F_EP;
  _attackDamage = F_AD;
  _maxHP = F_HP;
  std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  _hitPoints = F_HP;
  _energyPoints = F_EP;
  _attackDamage = F_AD;
  _maxHP = F_HP;
  std::cout << "FragTrap String constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
  const std::string* tmp = &_name;

  *(const_cast<std::string*>(tmp)) = src._name;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
  _maxHP = src._maxHP;
  std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
  const std::string* tmp = &_name;

  *(const_cast<std::string*>(tmp)) = src._name;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
  _maxHP = src._maxHP;

  return *this;
}

void FragTrap::highFiveGuys() { std::cout << "High Five!!!!!" << std::endl; }