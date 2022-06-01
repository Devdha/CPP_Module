#include "Intern.hpp"

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern&) {}
Intern::~Intern() {}
Intern& Intern::operator=(const Intern&) { return *this; }

Form* Intern::makeForm(std::string name, std::string target) {
  static const std::string forms[F_CNT] = {
      "presidential pardon", "robotomy request", "shrubbery creation"};
  Form* ret;
  int i = 0;

  while (i < F_CNT && forms[i] != name)
    ++i;
  switch (i) {
    case 0:
      ret = new PresidentialPardonForm(target);
      break;
    case 1:
      ret = new RobotomyRequestForm(target);
      break;
    case 2:
      ret = new ShrubberyCreationForm(target);
      break;
    default:
      throw NoMatchForm();
  }
  std::cout << "Intern creates " << ret->getName() << std::endl;
  return ret;
}

const char* Intern::NoMatchForm::what() const throw() {
  return "passed parameter(name) dosen't exist";
}