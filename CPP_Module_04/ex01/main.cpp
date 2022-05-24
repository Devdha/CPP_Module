#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;
  delete i;

  std::cout << "===============================" << std::endl;
  Animal* arr[10];
  for (int i = 0; i < 5; i++)
    arr[i] = new Dog();
  for (int i = 5; i < 10; i++)
    arr[i] = new Cat();

  std::cout << "===============================" << std::endl;

  for (int i = 0; i < 10; i++)
    delete arr[i];

  system("leaks animal");
  return 0;
}