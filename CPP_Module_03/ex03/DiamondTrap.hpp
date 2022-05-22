#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
  const std::string _name;

 public:
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap& src);
  ~DiamondTrap();
  DiamondTrap& operator=(const DiamondTrap& src);

  void whoAmI();
  void attack(const std::string& target);
};

#endif