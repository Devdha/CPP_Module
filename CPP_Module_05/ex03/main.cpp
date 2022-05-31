#include <ctime>
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  std::srand(std::time(NULL));

  Bureaucrat a("a", 150);
  Bureaucrat b("b", 1);
  Bureaucrat c("c", 75);

  ShrubberyCreationForm aa("aa");
  b.signForm(aa);
  b.executeForm(aa);
  std::cout << "=================" << std::endl;
  RobotomyRequestForm bb("bb");
  b.signForm(bb);
  for (int i = 0; i < 2; i++)
    b.executeForm(bb);
  std::cout << "=================" << std::endl;
  PresidentialPardonForm cc("cc");
  b.signForm(cc);
  c.executeForm(cc);
  b.executeForm(cc);
}