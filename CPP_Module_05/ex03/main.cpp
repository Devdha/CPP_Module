
#include <exception>
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  Intern someRandomIntern;
  Form* rrf;
  Form* rrf2;
  Bureaucrat a("a", 1);

  try {
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
  } catch (std::exception& e) {
    std::cerr << "Failed to make Form because " << e.what() << std::endl;
  }
  try {
    rrf2 = someRandomIntern.makeForm("robotomy reques", "Bender");
  } catch (std::exception& e) {
    std::cerr << "Failed to make Form because " << e.what() << std::endl;
  }
  a.executeForm(*rrf);
  a.signForm(*rrf);
  a.executeForm(*rrf);

  delete rrf;

  try {
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
  } catch (std::exception& e) {
    std::cerr << "Failed to make Form because " << e.what() << std::endl;
  }
  try {
    rrf2 = someRandomIntern.makeForm("shrubbery creatio", "Bender");
  } catch (std::exception& e) {
    std::cerr << "Failed to make Form because " << e.what() << std::endl;
  }
  a.signForm(*rrf);
  a.executeForm(*rrf);

  delete rrf;
}