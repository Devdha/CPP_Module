#include <deque>
#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

int main() {
  std::vector<int> v;
  std::list<int> l;
  std::deque<int> d;

  for (int i = 0; i < 4; i++) {
    v.push_back(i + 128);
    l.push_back(i + 128);
    d.push_back(i + 128);
  }

  std::cout << "================ vector ==============" << std::endl;
  try {
    std::cout << *(easyfind(v, 3)) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    std::cout << *(easyfind(v, 129)) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "================ list ==============" << std::endl;
  try {
    std::cout << *(easyfind(l, 3)) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    std::cout << *(easyfind(l, 129)) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "================ deque ==============" << std::endl;
  try {
    std::cout << *(easyfind(d, 3)) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    std::cout << *(easyfind(d, 129)) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}