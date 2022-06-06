#include "Span.hpp"

#include <iostream>
#include <set>
#include <vector>

Span::Span(unsigned int size) { storage_.reserve(size); }
Span::Span(const Span& src) : storage_(src.storage_) {}
Span& Span::operator=(const Span& src) {
  storage_.resize(src.storage_.size());
  std::copy(src.storage_.begin(), src.storage_.end(), storage_.begin());
  return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
  if (storage_.size() == storage_.capacity())
    throw NoSpaceException();
  storage_.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin,
                     std::vector<int>::iterator end) {
  if ((size_t)std::abs(std::distance(begin, end)) > storage_.capacity())
    throw NoSpaceException();
  for (int i = 0; begin != end; i++, begin++)
    storage_.push_back(*begin);
}

int Span::shortestSpan() const {
  if (storage_.size() < 2)
    throw NoSpanException();

  std::vector<int> tmp(storage_);
  std::set<int> set;
  std::sort(tmp.begin(), tmp.end());

  std::vector<int>::iterator it = tmp.begin();
  std::vector<int>::iterator itNext = it + 1;
  for (; itNext != tmp.end(); it++, itNext++) {
    // std::cout << "next: " << *itNext << " now: " << *it << " = "
    //           << *itNext - *it << std::endl;
    set.insert(*itNext - *it);
  }
  return *(set.begin());
}

int Span::longestSpan() const {
  if (storage_.size() < 2)
    throw NoSpanException();

  std::vector<int> tmp(storage_);
  std::sort(tmp.begin(), tmp.end());
  return (*(--tmp.end()) - *(tmp.begin()));
}

const char* Span::NoSpaceException::what() const throw() {
  return "Error: no space to add";
}

const char* Span::NoSpanException::what() const throw() {
  return "Error: no element to span";
}