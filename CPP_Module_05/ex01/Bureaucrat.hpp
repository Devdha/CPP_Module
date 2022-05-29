#if !defined BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>

#define GRADE_MAX 150
#define GRADE_MIN 1

class Form;
class Bureaucrat {
 private:
  const std::string _name;
  int _grade;

  Bureaucrat();

 public:
  Bureaucrat(std::string name, int grade);
  Bureaucrat(const Bureaucrat& src);
  Bureaucrat& operator=(const Bureaucrat& src);
  ~Bureaucrat();

  std::string getName() const;
  int getGrade() const;

  void increment();
  void decrement();

  void signForm(Form& form);

  struct GradeTooHighException : public std::exception {
    const char* what() const throw();
  };

  struct GradeTooLowException : public std::exception {
    const char* what() const throw();
  };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureau);

#endif  // BUREAUCRAT_HPP
