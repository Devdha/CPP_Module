#include "Form.hpp"

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

Form::Form() : _name("no_name"), _required(75), _signed(false) {}

Form::Form(std::string name, int required)
    : _name(name), _required(required), _signed(false) {
  if (_required > GRADE_MAX)
    throw GradeTooHighException();
  else if (_required < GRADE_MIN)
    throw GradeTooLowException();
}

Form::Form(const Form& src)
    : _name(src._name), _required(src._required), _signed(src._signed) {}

Form& Form::operator=(const Form& src) {
  _signed = src._signed;

  return *this;
}

Form::~Form() {}

void Form::beSigned(const Bureaucrat& bureau) {
  if (_signed) {
    throw AlreadySignedException();
  } else if (bureau.getGrade() <= _required) {
    _signed = true;
    std::cout << bureau.getName() << " signed " << _name << std::endl;
  } else
    throw GradeTooLowException();
}

std::string Form::getName() const { return _name; }

int Form::getRequired() const { return _required; }

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
             << "(required grade: " << form.getRequired() << ")";
}