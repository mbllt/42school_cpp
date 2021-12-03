#include "main.hpp"

//-----Constructors/Destructors----
Animal::Animal(void) {
	std::cout << "Constructing Animal" << std::endl;
}

Animal::Animal(std::string name) : _name(name) {
	std::cout << "Constructing Animal : " << name << std::endl;
}

Animal::Animal (Animal const& cpy) {
	std:: cout << "Copy constructor called in Animal." << std::endl;
	*this = cpy;
}

Animal::~Animal(void) {
	std::cout << "Destructing Animal : " << _name << std::endl;
}
//--------------------------------


//-----------Operators------------
Animal & Animal::operator=(Animal const & src) {
	std::cout << "Assignment operator called in Animal." << std::endl;
	_name = src.getName();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string Animal::getName () const {
	return _name;
}
//--------------------------------


//------------Functions-----------
//-------------------------------
