#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

#define HP 10
#define EP 10
#define AD 0

class ClapTrap {
 protected:
  const std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;
  unsigned int _maxHP;

 public:
  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& src);
  virtual ~ClapTrap();
  ClapTrap& operator=(const ClapTrap& src);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif