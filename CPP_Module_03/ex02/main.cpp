#include "FragTrap.hpp"

int main() {
  FragTrap A("A");
  FragTrap B("B");
  FragTrap C("C");
  FragTrap D;

  A.attack("B");
  B.takeDamage(5);
  B.takeDamage(5);
  B.beRepaired(10);
  C.beRepaired(5);
  D.attack("aaa");
  D.highFiveGuys();
}