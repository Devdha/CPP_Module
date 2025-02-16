#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
  AMateria* garbage[2];

  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");

  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  garbage[0] = tmp;
  tmp = src->createMateria("cure");
  me->equip(tmp);
  garbage[1] = tmp;

  ICharacter* bob = new Character("bob");

  me->use(0, *bob);
  me->use(1, *bob);

  me->unequip(0);
  me->unequip(1);

  delete bob;
  delete me;
  delete src;

  delete garbage[0];
  delete garbage[1];

  return 0;
}