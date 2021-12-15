#include "MateriaSource.hpp"
#include <iostream>

//-----Constructors/Destructors----
MateriaSource::MateriaSource(void) {
	std::cout << "Constructing MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_learnMateria[i] = NULL;
	}
	_nbrLearnMateria = 0;
}

MateriaSource::MateriaSource (MateriaSource const& cpy) {
	std:: cout << "Copy constructor called in MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_learnMateria[i] = NULL;
	}
	_nbrLearnMateria = 0;
	*this = cpy;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "Destructing MateriaSource." << std::endl;
}
//--------------------------------


//-----------Operators------------
MateriaSource & MateriaSource::operator=(MateriaSource const & src) {
	std::cout << "Assignment operator called in MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++)
		*_learnMateria[i] = src.getLearnMateria(i);
	_nbrLearnMateria = src.getNbrLearnMateria();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
AMateria const & MateriaSource::getLearnMateria(unsigned int index) const {
	// if (index >= 0 && index <= 4)
		return *_learnMateria[index];
}

unsigned int MateriaSource::getNbrLearnMateria() const {
	return _nbrLearnMateria;
}
//--------------------------------


//------------Functions-----------
void MateriaSource::learnMateria(AMateria * tmp) {
	if (_nbrLearnMateria < 4)
	{
		*_learnMateria[_nbrLearnMateria] = *tmp;
		_nbrLearnMateria++;
	}
}

AMateria * MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (_learnMateria[i] && _learnMateria[i]->getType() == type)
			return _learnMateria[i];
	}
	return 0;
}
//-------------------------------