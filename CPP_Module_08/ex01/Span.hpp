#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <exception>
#include <vector>

class Span {
 private:
  std::vector<int> storage_;
  Span();

 public:
  Span(unsigned int size);
  Span(const Span& src);
  Span& operator=(const Span& src);
  ~Span();

  void addNumber(int num);
  template <typename InputIterator>  // 정의와 선언을 분리하면 에러 발생
  void addNumber(InputIterator begin, InputIterator end) {
    if ((size_t)std::abs(std::distance(begin, end)) > storage_.capacity())
      throw NoSpaceException();
    for (int i = 0; begin != end; i++, begin++)
      storage_.push_back(*begin);
  }

  int shortestSpan() const;
  int longestSpan() const;

  class NoSpaceException : public std::exception {
    const char* what() const throw();
  };
  class NoSpanException : public std::exception {
    const char* what() const throw();
  };
};

#endif  // SPAN_HPP
