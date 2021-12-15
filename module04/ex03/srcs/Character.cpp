#include "Character.hpp"
#include "AMateria.hpp"

//-----Constructors/Destructors----
Character::Character(void) {
	std::cout << "Constructing Character." << std::endl;
	_nbrMateria = 0;
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Constructing Character." << std::endl;
	_nbrMateria = 0;
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = NULL;
	}
}

Character::Character (Character const& cpy) {
	std:: cout << "Copy constructor called in Character." << std::endl;
	_name = cpy.getName();
	unsigned int i = 0;
	while (i < cpy._nbrMateria)
	{
		_materia[i] = cpy._materia[i]->clone();
		i++;
	}
	while (i < 4)
	{
		_materia[i] = NULL;
		i++;
	}
	_nbrMateria = cpy._nbrMateria;
	*this = cpy;
}

Character::~Character(void) {
	std::cout << "Destructing Character." << std::endl;
	// int i = 0;
	// while (i < 4 && _materia[i])
	// {
	// 	delete (_materia[i]);
	// 	i++;
	// }
}
//--------------------------------


//-----------Operators------------
Character & Character::operator=(Character const & src) {
	std::cout << "Assignment operator called in Character." << std::endl;
	_name = src.getName();
	for (unsigned int i = 0; i < _nbrMateria; i++)
	{
		delete _materia[i];
	}
	for (unsigned int i = 0; i < src._nbrMateria; i++)
	{
		_materia[i] = src._materia[i]->clone();
	}
	_nbrMateria = src._nbrMateria;
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string const & Character::getName() const {
	return _name;
}
//--------------------------------


//------------Functions-----------
void Character::equip(AMateria* m) {
	if (_nbrMateria >= 0 && _nbrMateria <= 4)
		_materia[_nbrMateria] = m;
	if (_nbrMateria < 4)
		_nbrMateria++;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 4 && _materia[idx])
	{
		_materia[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 4 && _materia[idx])
	{
		_materia[idx]->use(target);
	}
}
//-------------------------------