#ifndef INTERN_HPP
#define INTERN_HPP

#include <exception>
#include <string>

#define F_CNT 3

class Form;
class Intern {
 public:
  Intern();
  Intern(const Intern&);
  ~Intern();
  Intern& operator=(const Intern&);

  Form* makeForm(std::string name, std::string target);

  struct NoMatchForm : public std::exception {
    const char* what() const throw();
  };
};

#endif  // Intern_HPP