#include "main.hpp"

//-----Constructors/Destructors----
ScavTrap::ScavTrap(void) {
	std::cout << "Constructing ScavTrap" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Constructing ScavTrap : " << name << std::endl;
	setName(name);
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap (ScavTrap const& cpy) {
	std:: cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructing ScavTrap : " << getName() << std::endl;
}
//--------------------------------


//-----------Operators------------
ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	std::cout << "Assignment operator called in ScavTrap." << std::endl;
	_name = src.getName();
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
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
