#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

void makeForm(std::string name, int req) {
  try {
    Form(name, req);
  } catch (std::exception& e) {
    std::cerr << "Fail to make Form " << name << " because " << e.what()
              << std::endl;
  }
}

int main() {
  Bureaucrat a("a", 150);
  Bureaucrat b("b", 1);
  Bureaucrat c("c", 75);

  Form as("af", 150);
  Form bs("bf", 1);

  std::cout << as << std::endl;
  std::cout << bs << std::endl;

  c.signForm(as);
  c.signForm(bs);
  a.signForm(as);
  b.signForm(bs);
  c.signForm(as);
  c.signForm(bs);

  std::cout << as << std::endl;
  std::cout << bs << std::endl;

  makeForm("test1", 151);
  makeForm("test2", 0);
  makeForm("test3", -15);
}