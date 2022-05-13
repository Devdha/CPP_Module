#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl = Harl();

	if (argc != 2) {
		std::cerr << "Error: 1 parameter required" << std::endl;
		return (1);
	}

	harl.complain(argv[1]);
}