#include "Bureaucrat.hpp"

#include <ostream>
#include <string>

#define GRADE_MAX 150
#define GRADE_MIN 1

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade) {
  if (grade > GRADE_MAX)
    throw GradeTooLowException();
  else if (grade < GRADE_MIN)
    throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
    : _name(src._name), _grade(src._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
  _grade = src._grade;

  return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::decrement() {
  if (_grade + 1 > GRADE_MAX)
    throw GradeTooLowException();
  _grade++;
}

void Bureaucrat::increment() {
  if (_grade - 1 < GRADE_MIN)
    throw GradeTooHighException();
  _grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureau) {
  return out << bureau.getName() << ", bureaucrat grade " << bureau.getGrade()
             << ".";
}