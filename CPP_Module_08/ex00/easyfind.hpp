#if !defined(EASYFIND_HPP)
#define EASYFIND_HPP

#include <algorithm>
#include <deque>
#include <list>
#include <stdexcept>
#include <vector>

template <typename T>
typename T::iterator easyfind(T& container, const int num) {
  typename T::iterator iter = std::find(T.begin(), T.end(), num);

  if (iter == T.end())
    throw std::invalid_argument();
  return iter;
}

#endif  // EASYFIND_HPP
