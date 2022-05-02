#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "util.hpp"

Contact::Contact() {
	index = 0;
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::Contact(
		ssize_t		idx,
		std::string	in_first_name,
		std::string	in_last_name,
		std::string	in_nickname,
		std::string	in_phone_number,
		std::string	in_darkest_secret) {
	index = idx;
	first_name = in_first_name;
	last_name = in_last_name;
	nickname = in_nickname;
	phone_number = in_phone_number;
	darkest_secret = in_darkest_secret;
};

void Contact::show() const {
	std::cout << std::right << std::setw(CWIDTH) << index << SEPARATOR;
	std::cout << std::right << std::setw(CWIDTH) << first_name << SEPARATOR;
	std::cout << std::right << std::setw(CWIDTH) << last_name << SEPARATOR;
	std::cout << std::right << std::setw(CWIDTH) << nickname << '\n';
}

void Contact::showDetail() const {
	std::cout << std::left << std::setw(CWIDTH) << CONT_IDX << index << std::endl;
	std::cout << std::right << std::setw(CWIDTH) << CONT_F_NAME << first_name << std::endl;
	std::cout << std::right << std::setw(CWIDTH) << CONT_L_NAME << last_name << std::endl;
	std::cout << std::right << std::setw(CWIDTH) << CONT_N_NAME << nickname << std::endl;
	std::cout << std::right << std::setw(CWIDTH) << CONT_P_NUMBER << phone_number << std::endl;
	std::cout << std::right << std::setw(CWIDTH) << CONT_D_SECRET << darkest_secret << std::endl;
}