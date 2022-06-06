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
  void addNumber(std::vector<int>::iterator begin,
                 std::vector<int>::iterator end);

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
