#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"
#include "util.hpp"

PhoneBook::PhoneBook()
{
	contact_idx = 0;
}

void PhoneBook::add(std::string *info) {
	contacts[contact_idx % 8] = Contact(contact_idx % 8 + 1, info[0], info[1], info[2], info[3], info[4]);
	contact_idx++;
}

void PhoneBook::search() const {
	std::string	input;
	ssize_t 	idx;

	for (int i = 0; i < contact_idx && i < 8; i++) {
		contacts[i].show();
	}
	std::cout << PRPT_IDX;
	std::getline(std::cin, input);
	std::stringstream sstream;
	sstream.str(input);
	sstream >> idx;
	if (!sstream.eof() || sstream.fail()) {
		sstream.clear();
		std::cout << ERR_VALUE;
		return ;
	}
	if (idx < 1 || idx > 8 || idx > contact_idx) {
		std::cout << ERR_INDEX;
		return ;
	}
	contacts[idx - 1].showDetail();
}