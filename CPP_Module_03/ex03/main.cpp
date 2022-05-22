#include "ScavTrap.hpp"

int main() {
  ScavTrap A("A");
  ScavTrap B("B");
  ScavTrap C("C");
  ScavTrap D;

  A.attack("B");
  B.takeDamage(5);
  B.takeDamage(5);
  B.guardGate();
  B.beRepaired(10);
  C.beRepaired(5);
  D.attack("aaa");
  D.guardGate();
}