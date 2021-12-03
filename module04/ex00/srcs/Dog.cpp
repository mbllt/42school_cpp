#include "main.hpp"

//-----Constructors/Destructors----
Dog::Dog(void) {
	std::cout << "Constructing Dog" << std::endl;
}

Dog::Dog(std::string name) {
	std::cout << "Constructing Dog : " << name << std::endl;
	_name = name;
	_type = _name;
}

Dog::Dog (Dog const& cpy) {
	std:: cout << "Copy constructor called in Dog." << std::endl;
	*this = cpy;
}

Dog::~Dog(void) {
	std::cout << "Destructing Dog : " << _name << std::endl;
}
//--------------------------------


//-----------Operators------------
Dog & Dog::operator=(Dog const & src) {
	std::cout << "Assignment operator called in Dog." << std::endl;
	_name = src.getName();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
//--------------------------------


//------------Functions-----------
//-------------------------------
