#include <iostream>
#include <sstream>
#include <istream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "util.hpp"

bool	checkEof() {
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << "  \n";
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
		std::cin >> info[i];
		// std::cout << '\n';
		if (checkEof())
			return false;
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
		std::cin >> input;
		// std::cout << '\n';
		if (checkEof())
			continue;
		iss.str(input);
		std::getline(iss >> std::ws, input);
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
			std::cout << "Unavaliable input.\n";
	}
}