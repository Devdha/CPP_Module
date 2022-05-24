#ifndef CAT_HPP
#define CAT_HPP

#include <string>

#include "Animal.hpp"

class Cat : public Animal {
 private:
  Brain* _brain;

 public:
  Cat();
  Cat(const Cat& src);
  ~Cat();
  Cat& operator=(const Cat& assign);

  void makeSound() const;
};

#endif  // Cat_HPP