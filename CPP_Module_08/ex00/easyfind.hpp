#if !defined(EASYFIND_HPP)
#define EASYFIND_HPP

#include <algorithm>
#include <deque>
#include <list>
#include <stdexcept>
#include <vector>

template <typename T>
typename T::iterator easyfind(T& container, const int num) {
  typename T::iterator iter =
      std::find(container.begin(), container.end(), num);

  if (iter == container.end())
    throw std::invalid_argument("Error: Passed parameter is not found");
  return iter;
}

#endif  // EASYFIND_HPP
