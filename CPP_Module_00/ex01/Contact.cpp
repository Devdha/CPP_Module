#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact(
		size_t		idx,
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