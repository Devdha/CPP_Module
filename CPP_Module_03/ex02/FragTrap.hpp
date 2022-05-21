#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define F_HP 100
#define F_EP 100
#define F_AD 30

class FragTrap : public ClapTrap {
 private:
 public:
  FragTrap();
  ~FragTrap();
};

FragTrap::FragTrap() {}

FragTrap::~FragTrap() {}

#endif