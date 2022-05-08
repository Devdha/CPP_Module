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

void Contact::printEach(std::string str, char seperator) const {
	if (str.length() > CWIDTH)
		std::cout << std::right << std::setw(CWIDTH) << str.substr(0, CWIDTH - 1) << '.' << seperator;
	else
		std::cout << std::right << std::setw(CWIDTH + 1) << str << seperator;
}

void Contact::show() const {
	printEach(std::to_string(index), SEPARATOR);
	printEach(first_name, SEPARATOR);
	printEach(last_name, SEPARATOR);
	printEach(nickname, '\n');	
}

void Contact::showDetail() const {
	std::cout << std::right << std::setw(OWIDTH) << CONT_IDX;
	std::cout << index << std::endl;
	std::cout << std::right << std::setw(OWIDTH) << CONT_F_NAME;
	std::cout << first_name << std::endl;
	std::cout << std::right << std::setw(OWIDTH) << CONT_L_NAME;
	std::cout << last_name << std::endl;
	std::cout << std::right << std::setw(OWIDTH) << CONT_N_NAME;
	std::cout << nickname << std::endl;
	std::cout << std::right << std::setw(OWIDTH) << CONT_P_NUMBER;
	std::cout << phone_number << std::endl;
	std::cout << std::right << std::setw(OWIDTH) << CONT_D_SECRET;
	std::cout << darkest_secret << std::endl;
}