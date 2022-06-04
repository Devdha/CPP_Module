#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
 private:
  T* elements_;
  unsigned int size_;

 public:
  Array() : elements_(NULL), size_(0) {}
  Array(unsigned int n) : size_(n) {
    if (n)
      elements_ = new T[n];
    else
      elements_ = NULL;
  }

  Array(const Array& src) : size_(src.size()) {
    if (size_) {
      elements_ = new T[size_];
      for (unsigned int i = 0; i < size_; i++)
        elements_[i] = src[i];
    } else
      elements_ = NULL;
  }

  Array& operator=(const Array& src) {
    if (this == &src)
      return *this;
    size_ = src.size();

    delete[] elements_;
    elements_ = NULL;
    if (size_) {
      elements_ = new T[size_];
      for (unsigned int i = 0; i < size_; i++)
        elements_[i] = src[i];
    }
    return *this;
  }

  T& operator[](unsigned int n) {
    if (size_ <= n)
      throw OutOfBound();
    return elements_[n];
  }

  const T& operator[](unsigned int n) const {
    if (size_ <= n)
      throw OutOfBound();
    return elements_[n];
  }

  unsigned int size() const { return size_; }

  ~Array() { delete[] elements_; }

  class OutOfBound : public std::exception {
    const char* what() const throw() { return "Out of bound"; }
  };
};

#endif  // ARRAY_HPP
