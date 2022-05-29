#if !defined(SHRUBBERYCREATIONFORM)
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 private:
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

 public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string name);
  ShrubberyCreationForm(const ShrubberyCreationForm& src);
  ~ShrubberyCreationForm();

  void execute(Bureaucrat const& executor);
};

#endif  // SHRUBBERYCREATIONFORM
