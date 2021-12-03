#include "Animal.hpp"

//-----Constructors/Destructors----
Animal::Animal(void) {
	std::cout << "Constructing Animal." << std::endl;
	_type = "Animal";
}

Animal::Animal (Animal const& cpy) {
	std:: cout << "Copy constructor called in Animal." << std::endl;
	*this = cpy;
}

Animal::~Animal(void) {
	std::cout << "Destructing Animal." << std::endl;
}
//--------------------------------


//-----------Operators------------
Animal & Animal::operator=(Animal const & src) {
	std::cout << "Assignment operator called in Animal." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string Animal::getType () const {
	return _type;
}
//--------------------------------


//------------Functions-----------
void Animal::makeSound() const {
}
//-------------------------------