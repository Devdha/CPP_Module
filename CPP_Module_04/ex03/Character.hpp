#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define SLOT_MAX 4

class Character : public ICharacter {
 private:
  std::string _name;
  AMateria* _arr[SLOT_MAX];

 public:
  Character();
  Character(std::string name);
  Character(const Character& src);
  Character& operator=(const Character& src);
  ~Character();

  std::string const& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif  // Character_HPP