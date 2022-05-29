#include "PresidentialPardonForm.hpp"

#include <iostream>

#include "Form.hpp"

#define P_SIGN 25
#define P_EXEC 5

PresidentialPardonForm::PresidentialPardonForm()
    : Form("no_name", P_SIGN, P_EXEC) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
    : Form(name, P_SIGN, P_EXEC) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm& src)
    : Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const& executor) {
  if (!Form::getSigned()) {
    throw NotSignedException();
  } else if (executor.getGrade() <= Form::getERequired()) {
    std::cout << executor.getName() << " executed " << Form::getName()
              << std::endl;
  } else
    throw GradeTooLowException();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(
    const PresidentialPardonForm& src) {
  (void)src;
}
