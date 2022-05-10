#include <sstream>
#include "Zombie.hpp"

std::string	int_to_str(int i) {
	std::ostringstream oss;

	oss << i;
	return oss.str();
}

Zombie* Zombie::zombieHorde(int N, std::string name) {
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].setName(name + int_to_str(i));
	return zombies;
}
