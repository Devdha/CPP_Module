#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>

#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("no_name", "no_name", S_SIGN, S_EXEC) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form(S_NAME, target, S_SIGN, S_EXEC) {}

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
    std::ofstream ofs;
    ofs.open(getTarget() + "_shrubbery",
             std::ofstream::out | std::ofstream::trunc);
    if (ofs.fail()) {
      std::cerr << "Error: file open failed" << std::endl;
      return;
    }
    ofs << A_TREE;
    ofs.close();
  } else
    throw GradeTooLowException();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm&) {
  return *this;
}
