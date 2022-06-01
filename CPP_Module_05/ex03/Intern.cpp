#include "Intern.hpp"

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
  int i = 0;
  while (i < F_CNT && forms[i] != name)
    ++i;
  switch (i) {
    case 0:
      return new PresidentialPardonForm(target);
    case 1:
      return new RobotomyRequestForm(target);
    case 2:
      return new ShrubberyCreationForm(target);
    default:
      throw NoMatchForm();
  }
}

const char* Intern::NoMatchForm::what() const throw() {
  return "passed parameter(name) dosen't exist";
}