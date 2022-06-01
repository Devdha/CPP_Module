#include "PresidentialPardonForm.hpp"

#include <iostream>

#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("no_name", "no_name", P_SIGN, P_EXEC) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form(P_NAME, target, P_SIGN, P_EXEC) {}

PresidentialPardonForm::PresidentialPardonForm(const Form& src) : Form(src) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm& src)
    : Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
  if (!Form::getSigned()) {
    throw NotSignedException();
  } else if (executor.getGrade() <= Form::getERequired()) {
    std::cout << executor.getName() << " executed " << Form::getName()
              << std::endl;
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox";
  } else
    throw GradeTooLowException();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(
    const PresidentialPardonForm&) {
  return *this;
}
