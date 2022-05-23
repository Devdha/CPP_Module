#ifndef Cat_HPP
#define Cat_HPP

#include <string>

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat& src);
  ~Cat();
  Cat& operator=(const Cat& assign);

  void makeSound() const;
};

#endif  // Cat_HPP