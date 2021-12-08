#include "Character.hpp"

//-----Constructors/Destructors----
Character::Character(void) {
	std::cout << "Constructing Character." << std::endl;
	nbrMateria = 0;
}

Character::Character(std::string name) : name(newName) {
	std::cout << "Constructing Character." << std::endl;
	nbrMateria = 0;
}

Character::Character (Character const& cpy) {
	std:: cout << "Copy constructor called in Character." << std::endl;
	*this = cpy;
}

Character::~Character(void) {
	std::cout << "Destructing Character." << std::endl;
	int i = 0;
	while (i < 4 && materia[i])
	{
		delete (materia[i]);
		i++;
	}
}
//--------------------------------


//-----------Operators------------
Character & Character::operator=(Character const & src) {
	std::cout << "Assignment operator called in Character." << std::endl;
	_type = src.getType();
	_name = srcs.getName();
	_nbrMateria = getNbrMateria();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string const & Character::getName() const {
	return name;
}

//--------------------------------


//------------Functions-----------
void Character::equip(AMateria* m) {
	materia[nbrMateria] = m;
	if (nbrMateria < 4)
		nbrMateria++;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 4 && materia[idx])
	{
		return ;
	}
}

void Character::use(int idx, Character& target) {
	if (idx >= 0 && idx <= 4 && target.materia[idx])
	{
		AMateria::use(target.materia[idx]);
	}
}
//-------------------------------