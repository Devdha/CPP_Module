#ifndef Dog_HPP
#define Dog_HPP

#include <string>

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog& src);
  Dog& operator=(const Dog& src);
  ~Dog();

  void makeSound() const;
};

#endif  // Dog_HPP