#include "print.hpp"

#include <iostream>
#include <limits>

char dtoc(double value) { return static_cast<char>(value); }
int dtoi(double value) { return static_cast<int>(value); }
float dtof(double value) { return static_cast<float>(value); }

void printChar(double value) {
  std::cout << "char: ";
  double infValue = std::numeric_limits<double>::infinity();
  if (value != value || value == infValue || value == -infValue) {
    std::cout << IMPOS << std::endl;
  } else if (!isprint(dtoc(value))) {
    std::cout << NONDP << std::endl;
  } else {
    std::cout << "'" << dtoc(value) << "'" << std::endl;
  }
}

void printInt(double value) {
  std::cout << "int: ";
  double infValue = std::numeric_limits<double>::infinity();
  if (value != value || value == infValue || value == -infValue)
    std::cout << IMPOS << std::endl;
  else
    std::cout << dtoi(value) << std::endl;
}

void printFloat(double value) {}

void printDouble(double value) {}
