#include "ScavTrap.hpp"

//-----Constructors/Destructors----
ScavTrap::ScavTrap(void) {
	std::cout << "Constructing ScavTrap" << std::endl;
	ScavTrap ScavTrap;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Constructing ScavTrap : " << name << std::endl;
	ScavTrap ScavTrap(name);
}

ScavTrap::ScavTrap (ScavTrap const& cpy) {
	*this = cpy;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructing ScavTrap : " << _name << std::endl;
}
//--------------------------------


//-----------Operators------------
ScavTrap& operator=(ScavTrap const & src) {
	return *this;
}
//--------------------------------


//-------------Getters------------

//--------------------------------


//------------Functions-----------
void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap : " << _name << " attacks with a giant leek" << target
			<< ", causing " << _attackDamage << " points of damage." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap : " << _name << " have entered in Gate keeper mode." << std::endl;
}

//-------------------------------
