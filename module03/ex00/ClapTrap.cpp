#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Constructing ClapTrap" << std::endl;
	_hitPoints = 10;
	_eneryPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Constructing ClapTrap : " << name << std::endl;
	_name = name;
	_hitPoints = 10;
	_eneryPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructing ClapTrap : " << _name << std::endl;
}

std::string ClapTrap::getName(void) {
	return _name;
}

void ClapTrap::attack(std::string const & target) {
	target.takeDamage(_hitPoints);
	std::cout << "ClapTrap : " << _name << "attacks " << target.getName()
			<< ", causing " << _attackDamage << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	_eneryPoints -= amount;
	std::cout << "ClapTrap : " << _name << "has been attacked " << amount
				<< " points of damage. Current energy points : "
				<< _eneryPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_eneryPoints += amount;
	std::cout << "ClapTrap : " << _name << "has regained " << amount
				<< " points of energy. Current energy points : "
				<< _eneryPoints << "." << std::endl;
}
