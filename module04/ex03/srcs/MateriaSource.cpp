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
		// _toDelete[i] = src.getToDelete(i);
	}
	while (i < 4)
	{
		_learnMateria[i] = NULL;
		// _toDelete[i] = NULL;
		i++;
	}
	_nbrLearnMateria = cpy._nbrLearnMateria;
	*this = cpy;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "Destructing MateriaSource." << std::endl;
	// int i = 0;
	// while (i < 4 && _learnMateria[i])
	// {
	// 	delete (_learnMateria[i]);
	// 	i++;
	// }
	// i = 0;
	// while (i < 4 && _toDelete[i])
	// {
	// 	delete _toDelete[i];
	// 	i++;
	// }
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
		// _toDelete[i] = src.getToDelete(i);
	}
	_nbrLearnMateria = src._nbrLearnMateria;
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
// void * MateriaSource::getToDelete(unsigned int index) const {
// 	// if (index >= 0 && index <= 4)
// 		return _toDelete[index];
// }
//--------------------------------


//------------Functions-----------
void MateriaSource::learnMateria(AMateria * tmp) {	// Not sure
	// int i = 0;
	// while (i < 4 && _toDelete[i])
	// 	i++;
	// if (i < 4)
	// 	_toDelete[i] = tmp;
	if (_nbrLearnMateria < 4)
	{
		_learnMateria[_nbrLearnMateria] = tmp;
		_nbrLearnMateria++;
	}
}

AMateria * MateriaSource::createMateria(std::string const & type) {	// Not sure
	for (int i = 0; i < 4; i++)
	{
		if (_learnMateria[i] && _learnMateria[i]->getType() == type)
			return _learnMateria[i];
	}
	return 0;
}
//-------------------------------