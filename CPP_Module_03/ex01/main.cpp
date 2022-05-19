#include "ScavTrap.hpp"

int main() {
    ScavTrap A("A");
    ScavTrap B("B");
    ScavTrap C("C");

    A.attack("B");
    B.takeDamage(5);
    B.takeDamage(5);
    B.beRepaired(10);
    C.beRepaired(5);
}