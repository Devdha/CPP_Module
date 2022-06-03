#include "Data.hpp"

Data::Data() : num_(0) {}
Data::Data(int num) : num_(num) {}
Data::Data(const Data& src) : num_(src.num_) {}
Data::~Data() {}

Data& Data::operator=(const Data& src) {
  num_ = src.getNum();
  return *this;
}

const int& Data::getNum() const { return num_; }