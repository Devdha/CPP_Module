#if !defined(MUTANTSTACK_HPP)
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;
  typedef
      typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
  typedef typename std::stack<T>::container_type::const_reverse_iterator
      const_reverse_iterator;

  MutantStack() : std::stack<T>() {}
  MutantStack(const MutantStack& src) : std::stack<T>(src) {}
  ~MutantStack() {}
  MutantStack& operator=(const MutantStack& src) {
    if (this == &src)
      return *this;
    this->c = src.c;
    return *this;
  }

  iterator begin() throw() { return this->c.begin(); }
  const_iterator begin() const throw() { return this->c.begin(); }
  iterator end() throw() { return this->c.end(); }
  const_iterator end() const throw() { return this->c.end(); }

  reverse_iterator rbegin() throw() { return this->c.rbegin(); }
  const_reverse_iterator rbegin() const throw() { return this->c.rbegin(); }
  reverse_iterator rend() throw() { return this->c.rend(); }
  const_reverse_iterator rend() const throw() { return this->c.rend(); }
};

#endif  // MUTANTSTACK_HPP
