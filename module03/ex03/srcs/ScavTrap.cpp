#include "main.hpp"

//-----Constructors/Destructors----
ScavTrap::ScavTrap(void) {
	std::cout << "Constructing ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Constructing ScavTrap : " << name << std::endl;
	setName(name);
}

ScavTrap::ScavTrap (ScavTrap const& cpy) {
	*this = cpy;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructing ScavTrap : " << getName() << std::endl;
}
//--------------------------------


//-----------Operators------------
ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	(void)src;
	return *this;
}
//--------------------------------


//------------Functions-----------
void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap : " << getName() << " attacks with a giant leek " << target
			<< ", causing " << getAttackDamage() << " points of damage." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap : " << getName() << " have entered in Gate keeper mode." << std::endl;
}

//-------------------------------
