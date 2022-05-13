#include <iostream>
#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << DEBUG_MSG;
	std::cout << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << INFO_MSG;
	std::cout << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << WARNING_MSG;
	std::cout << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << ERROR_MSG;
	std::cout << std::endl;
}

void Harl::complain(std::string level) {
	t_mode modes[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string modeLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	std::string* levelPtr = std::find(modeLevels, modeLevels + 4, level);
	size_t dist = levelPtr - modeLevels;
	t_mode mode;

	switch (dist)
	{
	case 0:
		mode = modes[0];
		(this->*mode)();
	case 1:
		mode = modes[1];
		(this->*mode)();
	case 2:
		mode = modes[2];
		(this->*mode)();
	case 3:
		mode = modes[3];
		(this->*mode)();
		break;
	default:
		std::cout << INVALID_LV_MSG << std::endl;
	}
}