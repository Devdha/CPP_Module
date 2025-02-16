#include <iostream>

#include "MutantStack.hpp"

int main() {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);

  std::cout << "===========================" << std::endl;
  MutantStack<int>::reverse_iterator it1 = mstack.rbegin();
  MutantStack<int>::reverse_iterator ite1 = mstack.rend();
  for (; it1 != ite1; it1++)
    std::cout << *it1 << std::endl;

  std::cout << "===========================" << std::endl;
  const MutantStack<int>::reverse_iterator it2 = mstack.rbegin();
  // const MutantStack<int>::reverse_iterator ite2 = mstack.rend();
  std::cout << *it2 << std::endl;
  // for (; it2 != ite2; it2++)
  //   std::cout << *it2 << std::endl;
  return 0;
}