#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
}

ScavTrap::~ScavTrap() {}
