#ifndef Animal_HPP
#define Animal_HPP

#include <string>

class Animal {
 protected:
  std::string _type;

 public:
  Animal();
  Animal(const Animal& src);
  virtual ~Animal();
  Animal& operator=(const Animal& src);

  virtual void makeSound() const;
  const std::string& getType() const;
};

#endif  // Animal_HPP