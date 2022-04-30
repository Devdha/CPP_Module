#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
 
int main()
{
	Contact	contact(0, "a", "b", "c", "d", "e");

	contact.show();
	// PhoneBook			phoneBook;
	// std::string			input;
	// std::istringstream	iss;

	// while (1) {
	// 	std::cin >> input;
	// 	iss = std::istringstream(input);
	// 	std::getline(iss >> std::ws, input);
	// 	if (input == "ADD")
	// 		phoneBook.add();
	// 	else if (input == "SEARCH")
	// 		phoneBook.search();
	// 	else if (input == "EXIT")
	// 		break;
	// 	else
	// 		std::cout << "Unavaliable input.";
	// }
}