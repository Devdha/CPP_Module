#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	Zombie::name = name;
}

Zombie::~Zombie() {
	std::cout << name << " " << "is died." << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": " << ZB_MSG << std::endl;
}