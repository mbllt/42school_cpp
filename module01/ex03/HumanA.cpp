#include "HumanA.hpp"

HumanA::HumanA (std::string new_name, Weapon& new_weapon) : _weapon(new_weapon), _name(new_name) {


}

HumanA::~HumanA (void) {


}

void	HumanA::attack (void) {

	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}