#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define F_HP 100
#define F_EP 100
#define F_AD 30

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap& src);
  ~FragTrap();
  FragTrap& operator=(const FragTrap& src);

  void highFiveGuys();
};

#endif