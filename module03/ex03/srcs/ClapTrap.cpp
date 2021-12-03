#include "main.hpp"

//-----Constructors/Destructors----
ClapTrap::ClapTrap(void)
	: _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructing ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructing ClapTrap : " << name << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const& cpy) {
	std:: cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructing ClapTrap : " << _name << std::endl;
}
//--------------------------------


//-----------Operators------------
ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	std::cout << "Assignment operator called in ClapTrap." << std::endl;
	_name = src.getName();
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getHitPoints();
	_attackDamage = src.getAttackDamage();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string ClapTrap::getName () const {
	return _name;
}

unsigned int ClapTrap::getHitPoints () const {
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints () const {
	return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage () const {
	return _attackDamage;
}

void ClapTrap::setName (std::string name) {
	_name = name;
}

void ClapTrap::setHitPoints (int nb) {
	_hitPoints = nb;
}

void ClapTrap::setEnergyPoints (int nb) {
	_energyPoints = nb;
}

void ClapTrap::setAttackDamage (int nb) {
	_attackDamage = nb;
}
//--------------------------------


//------------Functions-----------
void ClapTrap::attack(std::string const & target) const {
	std::cout << "ClapTrap : " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
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
