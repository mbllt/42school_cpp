#include "main.hpp"

//-----Constructors/Destructors----
Cat::Cat(void) {
	std::cout << "Constructing Cat" << std::endl;
	_type = "Cat";
}

Cat::Cat (Cat const& cpy) {
	std:: cout << "Copy constructor called in Cat." << std::endl;
	*this = cpy;
}

Cat::~Cat(void) {
	std::cout << "Destructing Cat." << std::endl;
}
//--------------------------------


//-----------Operators------------
Cat & Cat::operator=(Cat const & src) {
	std::cout << "Assignment operator called in Cat." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
//--------------------------------


//------------Functions-----------
//-------------------------------
