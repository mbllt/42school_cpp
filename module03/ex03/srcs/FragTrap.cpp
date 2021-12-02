#include "main.hpp"

//-----Constructors/Destructors----
FragTrap::FragTrap(void) {
	std::cout << "Constructing FragTrap" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Constructing FragTrap : " << name << std::endl;
	setName(name);
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap (FragTrap const& cpy) {
	std:: cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructing FragTrap : " << getName() << std::endl;
}
//--------------------------------


//-----------Operators------------
FragTrap & FragTrap::operator=(FragTrap const & src) {
	std::cout << "Assignment operator called in FragTrap." << std::endl;
	_name = src.getName();
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
	return *this;
}
//--------------------------------


//------------Functions-----------
void FragTrap::attack(std::string const & target) {
	std::cout << "ScavTrap : " << getName() << " attacks with a flying carpet " << target
			<< ", causing " << getAttackDamage() << " points of damage." << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap : \"High five to you, young traveler!\", says "
				<< getName() << "..." << std::endl;
}

//-------------------------------
