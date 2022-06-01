#if !defined FORM_HPP
#define FORM_HPP

#include <string>

#include "Bureaucrat.hpp"

class Bereaucrat;
class Form {
 private:
  const std::string _name;
  const int _s_required;
  const int _e_required;
  std::string _target;
  bool _signed;

  Form& operator=(const Form& src);

 public:
  Form();
  Form(std::string name, std::string target, int s_required, int e_required);
  Form(const Form& src);
  virtual ~Form();

  void beSigned(const Bureaucrat& bureau);
  virtual void execute(Bureaucrat const& executor) const = 0;

  std::string getName() const;
  std::string getTarget() const;
  int getSRequired() const;
  int getERequired() const;
  bool getSigned() const;

  struct GradeTooHighException : public std::exception {
    const char* what() const throw();
  };

  struct GradeTooLowException : public std::exception {
    const char* what() const throw();
  };

  struct AlreadySignedException : public std::exception {
    const char* what() const throw();
  };

  struct NotSignedException : public std::exception {
    const char* what() const throw();
  };
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif  // FORM_HPP
