#include "Harl.hpp"

int main() {
	Harl harl = Harl();

	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("ERROR");
}