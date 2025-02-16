#include <iostream>
#include <sstream>
#include <istream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "util.hpp"

bool	isEof() {
	if (std::cin.eof()) {
		clearerr(stdin);
		std::cout << std::endl;
		return true;
	}
	return false;
}

bool	getInfo(std::string *info) {
	std::string prompt[5] = {
		PRPT_F_NAME,
		PRPT_L_NAME,
		PRPT_N_NAME,
		PRPT_P_NUMBER,
		PRPT_D_SECRET
	};
	std::string	tmp;

	for (int i = 0; i < 5; i++) {
		std::cout << prompt[i];
		std::getline(std::cin, info[i]);
		std::istringstream iss(info[i]);
		iss >> std::ws >> tmp;
		if (isEof() || tmp.empty() || !std::cin.good()) {
			std::cerr << ERR_INPUT;
			return false;
		}
		tmp.clear();
	}
	return true;
}

int main() {
	PhoneBook			phoneBook;
	std::string			info[5];
	std::string			input;
	std::istringstream	iss;

	while (1) {
		std::cout << PRPT_INPUT;
		std::getline(std::cin, input);
		std::cin.ignore(-1, '\n');
		if (isEof() || !std::cin.good()) {
			std::cin.clear();
			continue;
		}
		if (input == "ADD")
		{
			if (getInfo(info) == false)
				continue;
			phoneBook.add(info);
		}
		else if (input == "SEARCH")
			phoneBook.search();
		else if (input == "EXIT")
			break;
		else
			std::cerr << ERR_INPUT;
		std::cin.clear();
	}
	exit(0);
}