#include <iostream>

#include "Array.hpp"

int main() {
  std::cout << "========= Int test ==========" << std::endl;
  Array<int> arr1 = Array<int>(3);
  std::cout << arr1.size() << std::endl;
  try {
    std::cout << arr1[3] << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    std::cout << arr1[2] << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "========= Deep copy test ==========" << std::endl;
  Array<int> arr3 = arr1;
  Array<int> arr4 = Array<int>(4);
  arr4 = arr1;
  arr1[0] = 3;
  std::cout << "arr1: " << arr1[0] << std::endl;
  std::cout << "arr3: " << arr3[0] << std::endl;
  std::cout << "arr4: " << arr4[0] << std::endl;

  std::cout << "========= Char test ==========" << std::endl;

  Array<char> arr2 = Array<char>();
  std::cout << arr2.size() << std::endl;
  try {
    std::cout << arr2[0] << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}