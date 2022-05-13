#include <iostream>
#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << DEBUG_MSG;
}

void Harl::info(void) {
	std::cout << INFO_MSG;
}

void Harl::warning(void) {
	std::cout << WARNING_MSG;
}

void Harl::error(void) {
	std::cout << ERROR_MSG;
}

void Harl::complain(std::string level) {
	t_mode modes[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string modeLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	std::string* levelPtr = std::find(modeLevels, modeLevels + 4, level);
	t_mode mode = modes[levelPtr - modeLevels];

	std::cout << "[ " << level << " ]\n";
	(this->*mode)();
	std::cout << std::endl;
}