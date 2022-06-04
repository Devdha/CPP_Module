#if !defined(ITER_HPP)
#define ITER_HPP

#include <cstdlib>
#include <iostream>

template <typename T>
void iter(T* addr, std::size_t len, void (*f)(T&)) {
  for (size_t i = 0; i < len; i++) {
    f(addr[i]);
  }
}

template <typename T>
void printValue(T& var) {
  std::cout << var << std::endl;
}

#endif  // ITER_HPP
