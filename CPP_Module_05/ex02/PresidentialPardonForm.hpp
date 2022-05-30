#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

#define P_SIGN 25
#define P_EXEC 5

class PresidentialPardonForm : public Form {
 private:
  PresidentialPardonForm& operator=(const PresidentialPardonForm&);

 public:
  PresidentialPardonForm();
  PresidentialPardonForm(std::string name);
  PresidentialPardonForm(const Form& src);
  PresidentialPardonForm(const PresidentialPardonForm& src);
  ~PresidentialPardonForm();

  void execute(Bureaucrat const& executor) const;
};

#endif  // PRESIDENTIALPARDONFORM_HPP
