#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
 protected:
  std::string _type;

 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& src);
  virtual ~WrongAnimal();
  WrongAnimal& operator=(const WrongAnimal& src);

  void makeSound() const;
  const std::string& getType() const;
};

#endif  // WrongAnimal_HPP