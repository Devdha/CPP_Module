#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
protected:
    const std::string   _name;
    unsigned int        _hitPoints;
    unsigned int        _energyPoints;
    unsigned int        _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& src);
    ~ClapTrap();
    ClapTrap&   operator=(const ClapTrap& src);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif