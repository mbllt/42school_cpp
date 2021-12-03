#include "main.hpp"

//-----Constructors/Destructors----
DiamondTrap::DiamondTrap(void) {
	std::cout << "Constructing DiamondTrap" << std::endl;
	_hitPoints = FragTrap::getHitPoints();
	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	std::cout << "Constructing DiamondTrap : " << _name << std::endl;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::getHitPoints();
	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap (DiamondTrap const& cpy) {
	std:: cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Destructing DiamondTrap : " << getName() << std::endl;
}
//--------------------------------


//-----------Operators------------
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src) {
	std::cout << "Assignment operator called in DiamondTrap." << std::endl;
	_name = src.getName();
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string DiamondTrap::getName () const {
	return _name;
}
//--------------------------------


//------------Functions-----------
void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap : \"My name is "
				<< getName() << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

//-------------------------------
