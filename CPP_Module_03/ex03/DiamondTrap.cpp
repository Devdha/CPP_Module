#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("no_name_clap_name"), FragTrap(), ScavTrap(), _name("no_name") {
  std::cout << "DiamondTrap Default constructor called" << std::endl;
  _hitPoints = FragTrap::_hitPoints;
  _energyPoints = ScavTrap::_energyPoints;
  _attackDamage = FragTrap::_attackDamage;
  _maxHP = FragTrap::_hitPoints;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name),
      ScavTrap(name),
      _name(name) {
  std::cout << "DiamondTrap String constructor called" << std::endl;
  _hitPoints = FragTrap::_hitPoints;
  _energyPoints = ScavTrap::_energyPoints;
  _attackDamage = FragTrap::_attackDamage;
  _maxHP = FragTrap::_hitPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src._name + "_clap_name"),
      FragTrap(src._name),
      ScavTrap(src._name),
      _name(src._name) {
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
  _maxHP = src._maxHP;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
  const std::string* tmp = &_name;
  const std::string* clapTrapTmp = &(ClapTrap::_name);

  *(const_cast<std::string*>(tmp)) = src._name;
  *(const_cast<std::string*>(clapTrapTmp)) = src.ClapTrap::_name;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
  _maxHP = src._maxHP;

  return *this;
}

void DiamondTrap::whoAmI() {
  std::cout << "My name: " << _name << std::endl;
  std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}
