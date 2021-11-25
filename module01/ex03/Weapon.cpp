#include "Weapon.hpp"

Weapon::Weapon (void) {

}

Weapon::Weapon (std::string str) : type(str) {

}

Weapon::~Weapon (void) {

}

void Weapon::setType (std::string str) {

	type = str;
}

std::string const& Weapon::getType (void) {

	return type;
}

