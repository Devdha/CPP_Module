#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  WrongCat(const WrongCat& src);
  ~WrongCat();
  WrongCat& operator=(const WrongCat& assign);

  void makeSound() const;
};

#endif  // WrongCat_HPP