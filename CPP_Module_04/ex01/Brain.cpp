#include "Brain.hpp"

#include <iostream>
#include <string>

Brain::Brain() {
  std::cout << "Brain Constructor called" << std::endl;

  for (int i = 0; i < 100; i++)
    _ideas[i] = "No idea";
}

Brain::Brain(const Brain& src) {
  std::cout << "Brain Copy constructor called" << std::endl;

  for (int i = 0; i < 100; i++)
    _ideas[i] = src._ideas[i];
}

Brain& Brain::operator=(const Brain& src) {
  for (int i = 0; i < 100; i++)
    _ideas[i] = src._ideas[i];

  return *this;
}

Brain::~Brain() { std::cout << "Brain Destructor called" << std::endl; }

void Brain::setIdea(size_t idx, const std::string idea) { _ideas[idx] = idea; }

const std::string& Brain::getIdea(size_t idx) { return _ideas[idx]; }