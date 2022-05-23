#include "DiamondTrap.hpp"

int main() {
  DiamondTrap A("A");
  DiamondTrap B("B");
  DiamondTrap C("C");
  DiamondTrap D;
  ClapTrap *E = new DiamondTrap("E");

  A.attack("B");
  B.takeDamage(5);
  B.takeDamage(5);
  B.guardGate();
  B.beRepaired(10);
  C.beRepaired(5);
  D.attack("aaa");
  D.guardGate();
  E->takeDamage(5);
  C.whoAmI();
  D.whoAmI();

  delete E;
}