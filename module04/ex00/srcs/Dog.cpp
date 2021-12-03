#include "main.hpp"

//-----Constructors/Destructors----
Dog::Dog(void) {
	std::cout << "Constructing Dog" << std::endl;
	_type = "Dog";
}

Dog::Dog (Dog const& cpy) {
	std:: cout << "Copy constructor called in Dog." << std::endl;
	*this = cpy;
}

Dog::~Dog(void) {
	std::cout << "Destructing Dog." << std::endl;
}
//--------------------------------


//-----------Operators------------
Dog & Dog::operator=(Dog const & src) {
	std::cout << "Assignment operator called in Dog." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
//--------------------------------


//------------Functions----------
void Dog::makeSound() const {
	std::cout << "****Wouf, im a dog****" << std::endl;
}
//-------------------------------
