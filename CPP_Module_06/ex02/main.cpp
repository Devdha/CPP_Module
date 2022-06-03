#include <ctime>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base* generate(void) {
  int idx = std::rand() % 3;
  Base* ret = NULL;

  switch (idx) {
    case 0:
      ret = new A();
      break;
    case 1:
      ret = new B();
      break;
    case 2:
      ret = new C();
      break;
  }
  return ret;
}

void identify(Base* p) {
  if (dynamic_cast<A*>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B*>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C*>(p))
    std::cout << "C" << std::endl;
}

void identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
  } catch (std::exception& e) {
  }
  try {
    (void)dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
  } catch (std::exception& e) {
  }
  try {
    (void)dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
  } catch (std::exception& e) {
  }
}

int main() {
  Base* base;
  std::srand(std::time(NULL));
  base = generate();
  Base& ref = *base;
  identify(base);
  identify(ref);
}