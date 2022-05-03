#include <iostream>
#include <sstream>
#include <istream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "util.hpp"

bool	isEof() {
	if (std::cin.eof()) {
		std::cin.clear();
		clearerr(stdin);
		std::cout << "  \n";
		return true;
	}
	return false;
}

bool	isFailed() {
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<ssize_t>::max(), '\n');
		std::cout << ERR_INPUT;
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

	for (int i = 0; i < 5; i++) {
		std::cout << prompt[i];
		std::getline(std::cin, info[i]);
		if (isEof() || isFailed() || info[i].empty()) {
			std::cout << ERR_INPUT;
			return false;
		}
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
		if (isEof() || isFailed())
			continue;
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
			std::cout << ERR_INPUT;
		std::cin.clear();
	}
	exit(0);
}