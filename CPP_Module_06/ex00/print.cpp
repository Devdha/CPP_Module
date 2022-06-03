#include "print.hpp"

#include <iomanip>
#include <iostream>
#include <limits>

static const double dInfValue = std::numeric_limits<double>::infinity();
static const float fInfValue = std::numeric_limits<float>::infinity();

char dtoc(double value) { return static_cast<char>(value); }
int dtoi(double value) { return static_cast<int>(value); }
float dtof(double value) { return static_cast<float>(value); }

void printChar(double value) {
  std::cout << "char: ";
  if (value != value || value == dInfValue || value == -dInfValue) {
    std::cout << IMPOS << std::endl;
  } else if (!isprint(dtoi(value))) {
    std::cout << NONDP << std::endl;
  } else {
    std::cout << "'" << dtoc(value) << "'" << std::endl;
  }
}

void printInt(double value) {
  std::cout << "int: ";
  if (value != value || value == dInfValue || value == -dInfValue)
    std::cout << IMPOS << std::endl;
  else
    std::cout << dtoi(value) << std::endl;
}

void printFloat(double value) {
  float fValue = dtof(value);

  std::cout << "float: ";
  if (fValue != fValue || fValue == fInfValue || fValue == -fInfValue)
    std::cout << std::showpos << fValue << "f" << std::endl;
  else if (fValue == static_cast<double>(static_cast<int64_t>(fValue)) &&
           static_cast<int64_t>(fValue) < 1000000)
    std::cout << dtof(value) << ".0f" << std::endl;
  else
    std::cout << std::setprecision(std::numeric_limits<float>::digits10)
              << dtof(value) << "f" << std::endl;
}

void printDouble(double value) {
  std::cout << "double: ";
  if (value != value || value == dInfValue || value == -dInfValue)
    std::cout << std::showpos << value << std::endl;
  else if (value == static_cast<double>(static_cast<int64_t>(value)) &&
           static_cast<int64_t>(value) < 1000000000000000)
    std::cout << std::setprecision(std::numeric_limits<double>::digits10)
              << value << ".0" << std::endl;
  else
    std::cout << std::setprecision(std::numeric_limits<double>::digits10)
              << value << std::endl;
}
