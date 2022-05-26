#include "Bureaucrat.hpp"

#include <ostream>

#define GRADE_MAX 150
#define GRADE_MIN 1

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade) {
  if (grade > GRADE_MAX)
    throw GradeTooHighException();
  else if (grade < GRADE_MIN)
    throw GradeTooLowException();
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
    throw GradeTooHighException();
  _grade++;
}

void Bureaucrat::increment() {
  if (_grade - 1 < GRADE_MIN)
    throw GradeTooLowException();
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