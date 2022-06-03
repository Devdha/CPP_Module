#include <iostream>

#include "Data.hpp"

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

int main() {
  Data a = Data();
  Data b = Data(1234);
  uintptr_t a1 = serialize(&a);
  uintptr_t b1 = serialize(&b);

  std::cout << "a addr: " << &a << std::endl;
  std::cout << "a1 value: " << std::hex << a1 << std::endl;
  std::cout << "a addr == deserialize(a1): " << (&a == deserialize(a1))
            << std::endl;

  std::cout << "b addr: " << &b << std::endl;
  std::cout << "b1 value: " << std::hex << b1 << std::endl;
  std::cout << "b addr == deserialize(b1): " << (&b == deserialize(b1))
            << std::endl;

  std::cout << "b num: " << std::dec << deserialize(b1)->getNum() << std::endl;
}
