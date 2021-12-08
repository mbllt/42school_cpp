#include "ICharacter.hpp"

//-----Constructors/Destructors----
ICharacter::ICharacter(void) {
	std::cout << "Constructing ICharacter." << std::endl;
}

ICharacter::ICharacter(std::string name) : name(newName) {
	std::cout << "Constructing ICharacter." << std::endl;
}

ICharacter::ICharacter (ICharacter const& cpy) {
	std:: cout << "Copy constructor called in ICharacter." << std::endl;
	*this = cpy;
}

ICharacter::~ICharacter(void) {
	std::cout << "Destructing ICharacter." << std::endl;
	int i = 0;
	while (i < 4 && materia[i])
	{
		delete (materia[i]);
		i++;
	}
}
//--------------------------------


//-----------Operators------------
ICharacter & ICharacter::operator=(ICharacter const & src) {
	std::cout << "Assignment operator called in ICharacter." << std::endl;
	_type = src.getType();
	name = srcs.getName();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string const & getName() const {
	return name;
}

//--------------------------------


//------------Functions-----------
void equip(ICharacter* m) {
	int i = 0;
	while (i < 4 && materia[i])
		i++;
	materia[i] = new AMateria(m->getType());
}

void unequip(int idx) {
	if (idx >= 0 && idx <= 4 && materia[idx])
	{
		return ;
	}
}

void use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 4 && target.materia[idx])
	{
		AMateria::use(target.materia[idx]);
	}
}
//-------------------------------