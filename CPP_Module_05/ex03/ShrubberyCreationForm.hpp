#if !defined(SHRUBBERYCREATIONFORM)
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"

#define S_SIGN 145
#define S_EXEC 137
#define A_TREE \
  "                                              .         ;    \n \
                 .              .              ;%     ;;        \n \
                   ,           ,                :;%  %;         \n \
                    :         ;                   :;%;'     .,  \n \
           ,.        %;     %;            ;        %;'    ,;    \n \
             ;       ;%;  %%;        ,     %;    ;%;    ,%'     \n \
              %;       %;%;      ,  ;       %;  ;%;   ,%;'      \n \
               ;%;      %;        ;%;        % ;%;  ,%;'        \n \
                `%;.     ;%;     %;'         `;%%;.%;'          \n \
                 `:;%.    ;%%. %@;        %; ;@%;%'             \n \
                    `:%;.  :;bd%;          %;@%;'               \n \
                      `@%:.  :;%.         ;@@%;'                \n \
                        `@%.  `;@%.      ;@@%;                  \n \
                          `@%%. `@%%    ;@@%;                   \n \
                            ;@%. :@%%  %@@%;                    \n \
                              %@bd%%%bd%%:;                     \n \
                                #@%%%%%:;;                      \n \
                                %@@%%%::;                       \n \
                                %@@@%(o);  . '                  \n \
                                %@@@o%;:(.,'                    \n \
                            `.. %@@@o%::;                       \n \
                               `)@@@o%::;                       \n \
                                %@@(o)::;                       \n \
                               .%@@@@%::;                       \n \
                               ;%@@@@%::;.                      \n \
                              ;%@@@@%%:;;;.                     \n \
                          ...;%@@@@@%%:;;;;,..    "

class ShrubberyCreationForm : public Form {
 private:
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

 public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string name);
  ShrubberyCreationForm(const Form& src);
  ShrubberyCreationForm(const ShrubberyCreationForm& src);
  ~ShrubberyCreationForm();

  void execute(Bureaucrat const& executor) const;
};

#endif  // SHRUBBERYCREATIONFORM
