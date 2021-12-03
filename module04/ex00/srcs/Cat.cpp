#include "main.hpp"

//-----Constructors/Destructors----
Cat::Cat(void) {
	std::cout << "Constructing Cat" << std::endl;
}

Cat::Cat(std::string name) {
	std::cout << "Constructing Cat : " << name << std::endl;
	_name = name;
	_type = _name;
}

Cat::Cat (Cat const& cpy) {
	std:: cout << "Copy constructor called in Cat." << std::endl;
	*this = cpy;
}

Cat::~Cat(void) {
	std::cout << "Destructing Cat : " << _name << std::endl;
}
//--------------------------------


//-----------Operators------------
Cat & Cat::operator=(Cat const & src) {
	std::cout << "Assignment operator called in Cat." << std::endl;
	_name = src.getName();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
//--------------------------------


//------------Functions-----------
//-------------------------------
