#ifndef DATA_HPP
#define DATA_HPP

class Data {
 private:
  int num_;

 public:
  Data();
  Data(int num);
  Data(const Data& src);
  ~Data();

  Data& operator=(const Data& src);

  const int& getNum() const;
};

#endif  // Data_HPP