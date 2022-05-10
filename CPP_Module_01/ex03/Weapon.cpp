#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	Weapon::type = type;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() {
	std::string& ret = type;

	return ret;
}

void Weapon::setType(std::string newType) {
	type = newType;
}