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
  Animal& operator=(const Animal& src);

  virtual void makeSound() const = 0;
  const std::string& getType() const;
};

#endif  // Animal_HPP