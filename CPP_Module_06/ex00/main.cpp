#include <iostream>
#include <stdexcept>

#include "print.hpp"

double parse(const std::string& input) {
  double ret = 0.0;
  char* ptr = NULL;

  if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0]))
    ret = static_cast<double>(input[0]);
  else {
    ret = strtod(input.c_str(), &ptr);
    if (ret == 0.0 && input[0] != '-' && input[0] != '+' &&
        !std::isdigit(input[0])) {
      throw std::invalid_argument(input);
    }
    if (*ptr && std::strcmp(ptr, "f"))
      throw std::invalid_argument(input);
  }
  return ret;
}

void cast(const std::string& input) {
  double value = 0.0;
  try {
    value = parse(input);
    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
  } catch (std::invalid_argument& e) {
    std::cerr << "Error: Invalid parameter passed as \"" << e.what() << "\""
              << std::endl;
  }
}

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Error: This program only can get one parameter." << std::endl;
    return 1;
  }
  cast(argv[1]);
}