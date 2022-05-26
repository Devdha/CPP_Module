#include <iostream>

#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat a("a", 151);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    Bureaucrat b("b", 0);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    Bureaucrat c("c", 70);
    for (int i = 0; i < 81; i++) {
      c.increment();
      if (i % 10 == 0)
        std::cout << c << std::endl;
    }
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}