#ifndef DOG_HPP
#define DOG_HPP

#include <string>

#include "Animal.hpp"

class Dog : public Animal {
 private:
  Brain* _brain;

 public:
  Dog();
  Dog(const Dog& src);
  Dog& operator=(const Dog& src);
  ~Dog();

  void makeSound() const;
};

#endif  // Dog_HPP