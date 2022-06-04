#include <iostream>
#include <string>

#include "iter.hpp"
void increment(int& num) { num++; }

int main() {
  int intArr[5] = {1, 2, 3, 4, 5};
  char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
  std::string strArr[5] = {"I", "My", "Me", "Mine", "She"};

  iter<int>(intArr, 5, printValue<int>);
  std::cout << "=========================" << std::endl;
  iter(intArr, 5, increment);
  iter(intArr, 5, printValue);
  std::cout << "=========================" << std::endl;
  iter(charArr, 5, printValue);
  std::cout << "=========================" << std::endl;
  iter(strArr, 5, printValue);
}