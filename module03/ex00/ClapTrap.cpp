#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Constructing ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	std::cout << "Constructing ClapTrap : " << _name << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructing ClapTrap : " << _name << std::endl;
}

std::string ClapTrap::getName(void) {
	return _name;
}

void ClapTrap::attack(std::string const & target) {

	std::cout << "ClapTrap : " << _name << "attack " << target.getName()
			<< ", causing " << _attackDamage << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	_eneryPoints -= amount;
	std::cout << "ClapTrap : " << _name << "has attacken " << amount
				<< " points of damage. Energy points : "
				<< _eneryPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_eneryPoints += amount;
	std::cout << "ClapTrap : " << _name << "has regained " << amount
				<< " points of energy. Energy points : "
				<< _eneryPoints << "." << std::endl;
}