#include <iostream>
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
	ssize_t idx;

	for (int i = 0; i < contact_idx % 8; i++) {
		contacts[i].show();
	}
	std::cout << PRPT_IDX;
	std::cin >> idx;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<ssize_t>::max(), '\n');
		std::cout << ERR_VALUE;
		return ;
	} else if (idx < 1 || idx > 8 || idx > contact_idx) {
		std::cout << ERR_INDEX;
		return ;
	}
	contacts[idx - 1].showDetail();
}