#include "ClapTrap.hpp"

int main() {
    ClapTrap A("A");
    ClapTrap B("B");
    ClapTrap C("C");

    A.attack("B");
    B.takeDamage(5);
    B.takeDamage(5);
    B.beRepaired(10);
    C.beRepaired(5);
}