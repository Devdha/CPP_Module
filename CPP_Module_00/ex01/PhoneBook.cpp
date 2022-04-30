#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contact_idx = 0;
}

void PhoneBook::add(std::string *info) {
	contacts[contact_idx % 8] = Contact(contact_idx, info[0], info[1], info[2], info[3], info[4]);
	contact_idx++;
	
}

void PhoneBook::search() const {
	for (int i = 0; i < contact_idx % 8 - 1; i++) {
		contacts[i].show();
	}
}