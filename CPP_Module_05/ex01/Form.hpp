#if !defined FORM_HPP
#define FORM_HPP

#include <string>

#include "Bureaucrat.hpp"

class Bereaucrat;
class Form {
 private:
  const std::string _name;
  const int _required;
  bool _signed;

  Form& operator=(const Form& src);

 public:
  Form();
  Form(std::string name, int required);
  Form(const Form& src);
  ~Form();

  void beSigned(const Bureaucrat& bureau);

  std::string getName();

  struct GradeTooHighException : public std::exception {
    const char* what() const throw();
  };

  struct GradeTooLowException : public std::exception {
    const char* what() const throw();
  };

  struct AlreadySignedException : public std::exception {
    const char* what() const throw();
  };
};

#endif  // FORM_HPP
