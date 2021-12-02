#include "ClapTrap.hpp"

//-----Constructors/Destructors----
ClapTrap::ClapTrap(void)
	: _hitPoints(10), _eneryPoints(10), _attackDamage(0) {
	std::cout << "Constructing ClapTrap" << std::endl;
	(void)_eneryPoints;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _eneryPoints(10), _attackDamage(0) {
	std::cout << "Constructing ClapTrap : " << name << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructing ClapTrap : " << _name << std::endl;
}
//--------------------------------


//-------------Getters------------
std::string ClapTrap::getName(void) {
	return _name;
}

unsigned int ClapTrap::getAttackDamage(void) {
	return _attackDamage;
}
//--------------------------------


//------------Functions-----------
void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap : " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	std::cout << "ClapTrap : " << _name << " has taken " << amount
				<< " points of damage. Current hit points : "
				<< _hitPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_hitPoints += amount;
	std::cout << "ClapTrap : " << _name << " has regained " << amount
				<< " hit points. Current hit points : "
				<< _hitPoints << "." << std::endl;
}
//-------------------------------
