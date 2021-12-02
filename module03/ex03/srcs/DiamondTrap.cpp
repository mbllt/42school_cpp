#include "main.hpp"

//-----Constructors/Destructors----
DiamondTrap::DiamondTrap(void) {
	std::cout << "Constructing DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	std::cout << "Constructing DiamondTrap : " << _name << std::endl;
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap (DiamondTrap const& cpy) {
	*this = cpy;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Destructing DiamondTrap : " << getName() << std::endl;
}
//--------------------------------


//-----------Operators------------
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src) {
	_name = src.getName();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string DiamondTrap::getName () const {
	return _name;
}
//--------------------------------


//------------Functions-----------
void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap : \"My name is "
				<< getName() << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

//-------------------------------
