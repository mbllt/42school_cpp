#include "Ice.hpp"

//-----Constructors/Destructors----
Ice::Ice(void) {
	std::cout << "Constructing Ice." << std::endl;
	_type = "ice";
}

Ice::Ice (Ice const& cpy) {
	std:: cout << "Copy constructor called in Ice." << std::endl;
	*this = cpy;
}

Ice::Ice(std::string const & type) {
	std::cout << "Constructing Ice with type." << std::endl;
	_type = type;
}

Ice::~Ice(void) {
	std::cout << "Destructing Ice." << std::endl;
}
//--------------------------------


//-----------Operators------------
Ice & Ice::operator=(Ice const & src) {
	std::cout << "Assignment operator called in Ice." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string const & Ice::getType () const {
	return _type;
}
//--------------------------------


//------------Functions-----------
AMateria* Ice::clone() const {
	AMateria* clone = new Ice(_type);
	return clone;
}
//-------------------------------