#include "Zombie.hpp"

int	main() {
	Zombie *zombie1;
	Zombie *zombie2;
	
	zombie1 = Zombie::newZombie("zb1");
	zombie2 = Zombie::newZombie("zb2");

	Zombie::randomChump("zb3");

	zombie2->announce();
	zombie1->announce();

	delete zombie1;
	delete zombie2;
}