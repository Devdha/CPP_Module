#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  // const Animal* k = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  j->makeSound();
  i->makeSound();

  delete j;
  delete i;

  return 0;
}