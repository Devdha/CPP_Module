#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#include "Brain.hpp"

class Animal {
 protected:
  std::string _type;

 public:
  Animal();
  Animal(const Animal& src);
  virtual ~Animal();
  virtual Animal& operator=(const Animal& src);

  virtual void makeSound() const;
  const std::string& getType() const;
};

#endif  // Animal_HPP