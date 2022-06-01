#if !defined(ROBOTOMYREQUESTFORM)
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"

#define R_SIGN 72
#define R_EXEC 45
#define R_NAME "Robotomy request form"
#define D_SOUND "Drrrrrrrrrrrrrrrrrrrrrrrrilling"

class RobotomyRequestForm : public Form {
 private:
  RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

 public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const Form& src);
  RobotomyRequestForm(const RobotomyRequestForm& src);
  ~RobotomyRequestForm();

  void execute(Bureaucrat const& executor) const;
};

#endif  // ROBOTOMYREQUESTFORM
