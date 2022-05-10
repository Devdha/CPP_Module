#include "Zombie.hpp"
#include <iostream>

int main() {
	Zombie *zombies;

	zombies = Zombie::zombieHorde(10, "zombie");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	
	delete[] zombies;
	std::cout << "-----Done-----\n";
	return (0);
}
