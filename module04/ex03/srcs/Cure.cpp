#include "Cure.hpp"

//-----Constructors/Destructors----
Cure::Cure(void) {
	std::cout << "Constructing Cure." << std::endl;
	_type = "cure";
}

Cure::Cure (Cure const& cpy) {
	std:: cout << "Copy constructor called in Cure." << std::endl;
	*this = cpy;
}

Cure::Cure(std::string const & type) {
	std::cout << "Constructing Cure with type." << std::endl;
	_type = type;
}

Cure::~Cure(void) {
	std::cout << "Destructing Cure." << std::endl;
}
//--------------------------------


//-----------Operators------------
Cure & Cure::operator=(Cure const & src) {
	std::cout << "Assignment operator called in Cure." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string const & Cure::getType () const {
	return _type;
}
//--------------------------------


//------------Functions-----------
AMateria* Cure::clone() const {
	AMateria* clone = new Cure(_type);
	return clone;
}
//-------------------------------