#if !defined(ROBOTOMYREQUESTFORM)
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 private:
  RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

 public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string name);
  RobotomyRequestForm(const RobotomyRequestForm& src);
  ~RobotomyRequestForm();

  void execute(Bureaucrat const& executor);
};

#endif  // ROBOTOMYREQUESTFORM
