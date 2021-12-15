#include "MateriaSource.hpp"
#include <iostream>

//-----Constructors/Destructors----
MateriaSource::MateriaSource(void) {
	std::cout << "Constructing MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_learnMateria[i] = NULL;
		// _toDelete[i] = NULL;
	}
	_nbrLearnMateria = 0;
}

MateriaSource::MateriaSource (MateriaSource const& cpy) {
	std:: cout << "Copy constructor called in MateriaSource." << std::endl;
	unsigned int i = 0;
	while (i < cpy._nbrLearnMateria)
	{
		_learnMateria[i] = cpy._learnMateria[i]->clone();
		i++;
	}
	while (i < 4)
	{
		_learnMateria[i] = NULL;
		i++;
	}
	_nbrLearnMateria = cpy._nbrLearnMateria;
	*this = cpy;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "Destructing MateriaSource." << std::endl;
	unsigned int i = 0;
	while (i < _nbrLearnMateria)
	{
		delete _learnMateria[i];
		i++;
	}
}
//--------------------------------


//-----------Operators------------
MateriaSource & MateriaSource::operator=(MateriaSource const & src) {
	std::cout << "Assignment operator called in MateriaSource." << std::endl;
	for (unsigned int i = 0; i < _nbrLearnMateria; i++)
	{
		delete _learnMateria[i];
	}
	for (unsigned int i = 0; i < src._nbrLearnMateria; i++)
	{
		_learnMateria[i] = src._learnMateria[i]->clone();
	}
	_nbrLearnMateria = src._nbrLearnMateria;
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
//--------------------------------


//------------Functions-----------
void MateriaSource::learnMateria(AMateria * tmp) {
	if (_nbrLearnMateria < 4)
	{
		_learnMateria[_nbrLearnMateria] = tmp;
		_nbrLearnMateria++;
	}
	else
		delete tmp;
}

AMateria * MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (_learnMateria[i] && _learnMateria[i]->getType() == type)
			return _learnMateria[i]->clone();
	}
	return 0;
}
//-------------------------------