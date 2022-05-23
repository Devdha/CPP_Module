#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define S_HP 100
#define S_EP 50
#define S_AD 20

class ScavTrap : public virtual ClapTrap {
 private:
  bool _isKeeper;

 public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& src);
  ~ScavTrap();
  ScavTrap& operator=(const ScavTrap& src);

  void attack(const std::string& target);
  void guardGate();
};

#endif
