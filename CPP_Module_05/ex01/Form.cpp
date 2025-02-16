#include "Form.hpp"

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

Form::Form()
    : _name("no_name"), _s_required(75), _e_required(75), _signed(false) {}

Form::Form(std::string name, int s_required, int e_required)
    : _name(name),
      _s_required(s_required),
      _e_required(e_required),
      _signed(false) {
  if (s_required > GRADE_MAX || e_required > GRADE_MAX)
    throw GradeTooLowException();
  else if (s_required < GRADE_MIN || e_required < GRADE_MIN)
    throw GradeTooHighException();
}

Form::Form(const Form& src)
    : _name(src._name),
      _s_required(src._s_required),
      _e_required(src._e_required),
      _signed(src._signed) {}

Form& Form::operator=(const Form& src) {
  _signed = src._signed;

  return *this;
}

Form::~Form() {}

void Form::beSigned(const Bureaucrat& bureau) {
  if (_signed) {
    throw AlreadySignedException();
  } else if (bureau.getGrade() <= _s_required) {
    _signed = true;
    std::cout << bureau.getName() << " signed " << _name << std::endl;
  } else
    throw GradeTooLowException();
}

std::string Form::getName() const { return _name; }
int Form::getSRequired() const { return _s_required; }
int Form::getERequired() const { return _e_required; }
bool Form::getSigned() const { return _signed; }

const char* Form::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

const char* Form::AlreadySignedException::what() const throw() {
  return "this Form is already signed";
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
  std::string isSigned = form.getSigned() ? "is signed " : "isn't signed";

  return out << form.getName() << ", form " << isSigned
             << "(required grade: " << form.getSRequired() << " / "
             << form.getERequired() << ")";
}