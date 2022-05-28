#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form& Form::operator=(const Form& src) {}

Form::Form() : _name("no_name"), _required(75), _signed(false) {}

Form::Form(std::string name, int required) : _name(name), _required(required), _signed(false) {
	if (_required > GRADE_MAX)
    throw GradeTooHighException();
  else if (_required < GRADE_MIN)
    throw GradeTooLowException();
}

Form::Form(const Form& src) : _name(src._name), _required(src._required), _signed(src._signed) {}

Form::~Form() {}

void Form::beSigned(const Bureaucrat& bureau) {
	if (bureau.getGrade() <= _required) {
		_signed = true;
		std::cout << bureau.getGrade() << " signed " << _name;
	} else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}