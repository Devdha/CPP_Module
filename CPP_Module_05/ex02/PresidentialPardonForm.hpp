#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
 private:
  PresidentialPardonForm& operator=(const PresidentialPardonForm& src);

 public:
  PresidentialPardonForm();
  PresidentialPardonForm(std::string name);
  PresidentialPardonForm(const PresidentialPardonForm& src);
  ~PresidentialPardonForm();

  void execute(Bureaucrat const& executor);
};

#endif  // PRESIDENTIALPARDONFORM_HPP
