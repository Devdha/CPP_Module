#include <time.h>

#include <iostream>
#include <vector>

#include "Span.hpp"

int main() {
  std::vector<int> v;

  std::srand(time(NULL));
  for (int i = 0; i < 15000; i++)
    v.push_back(std::rand());

  Span s(15000);
  try {
    s.addNumber(v.begin(), v.end());
    std::cout << "S span: " << s.shortestSpan() << std::endl;
    std::cout << "L span: " << s.longestSpan() << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  Span s2(5);
  try {
    s2.addNumber(1);
    s2.addNumber(100);
    s2.addNumber(95);
    s2.addNumber(2000);
    s2.addNumber(124124124);
    std::cout << "S span: " << s2.shortestSpan() << std::endl;
    std::cout << "L span: " << s2.longestSpan() << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  Span sp = Span(5);
  try {
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}