#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	HumanB::name = name;
}

HumanB::~HumanB() {}

void HumanB::attack() const {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}