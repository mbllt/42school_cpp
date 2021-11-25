#include "HumanB.hpp"

HumanB::HumanB (void) {


}
HumanB::HumanB (std::string new_name) : _name(new_name) {


}

HumanB::~HumanB (void) {


}

void	HumanB::attack (void) {

	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}


void		HumanB::setWeapon(Weapon& new_weapon) {

	_weapon = &new_weapon;
}
