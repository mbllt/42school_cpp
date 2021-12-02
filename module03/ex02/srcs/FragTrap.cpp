#include "main.hpp"

//-----Constructors/Destructors----
FragTrap::FragTrap(void) {
	std::cout << "Constructing FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Constructing FragTrap : " << name << std::endl;
	setName(name);
}

FragTrap::FragTrap (FragTrap const& cpy) {
	*this = cpy;
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructing FragTrap : " << getName() << std::endl;
}
//--------------------------------


//-----------Operators------------
FragTrap & FragTrap::operator=(FragTrap const & src) {
	(void)src;
	return *this;
}
//--------------------------------


//------------Functions-----------
void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap : \"High five to you, young traveler!\", says "
				<< getName() << "..." << std::endl;
}

//-------------------------------
