#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

#define ZB_MSG "BraiiiiiiinnnzzzZ..."

class Zombie {
private:
	std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void);
    void setName(std::string name);

    static Zombie* zombieHorde(int N, std::string name);
    static Zombie* newZombie(std::string name);
    static void randomChump(std::string name);
};

#endif