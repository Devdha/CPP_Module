#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("no_name", R_SIGN, R_EXEC) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name)
    : Form(name, R_SIGN, R_EXEC) {}

RobotomyRequestForm::RobotomyRequestForm(const Form& src) : Form(src) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
    : Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
  if (!Form::getSigned()) {
    throw NotSignedException();
  } else if (executor.getGrade() <= Form::getERequired()) {
    std::cout << executor.getName() << " executed " << Form::getName()
              << std::endl;
    std::cout << D_SOUND << std::endl;

    std::string status = std::rand() % 2 ? "robotomized successfully"
                                         : "failed to be robotomized";
    std::cout << executor.getName() << " has been " << status << std::endl;
  } else
    throw GradeTooLowException();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(
    const RobotomyRequestForm&) {
  return *this;
}
