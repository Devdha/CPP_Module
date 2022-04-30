#ifndef UTIL_HPP
# define UTIL_HPP

# define PRPT_INPUT "PhoneBook: type a command: "

# define PRPT_F_NAME "Type your first name: "
# define PRPT_L_NAME "Type your last name: "
# define PRPT_N_NAME "Type your nickname: "
# define PRPT_P_NUMBER "Type your phone number: "
# define PRPT_D_SECRET "Type your darkest secret: "
# define PRPT_IDX "Type index of contact: "

# define CONT_IDX "Index: "
# define CONT_F_NAME "First name: "
# define CONT_L_NAME "Last name: "
# define CONT_N_NAME "Nickname: "
# define CONT_P_NUMBER "Phone number: "
# define CONT_D_SECRET "Secret: "

bool	isValidInput(std::string input, int idx);

#endif