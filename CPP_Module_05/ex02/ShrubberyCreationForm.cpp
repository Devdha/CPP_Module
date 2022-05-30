#include "ShrubberyCreationForm.hpp"

#include <iostream>

#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("no_name", S_SIGN, S_EXEC) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
    : Form(name, S_SIGN, S_EXEC) {}

ShrubberyCreationForm::ShrubberyCreationForm(const Form& src) : Form(src) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
    : Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  if (!Form::getSigned()) {
    throw NotSignedException();
  } else if (executor.getGrade() <= Form::getERequired()) {
    std::cout << executor.getName() << " executed " << Form::getName()
              << std::endl;
  } else
    throw GradeTooLowException();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm&) {
  return *this;
}
