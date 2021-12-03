#include "Cat.hpp"

//-----Constructors/Destructors----
Cat::Cat(void) {
	std::cout << "Constructing Cat" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat (Cat const& cpy) {
	std:: cout << "Copy constructor called in Cat." << std::endl;
	_brain = new Brain();
	*this = cpy;
}

Cat::~Cat(void) {
	delete (_brain);
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
Brain *	Cat::getBrain() const {
	return (_brain);
}
//--------------------------------


//------------Functions-----------
void Cat::makeSound() const {
	std::cout << "****Miaou, im a cat****" << std::endl;
}
//-------------------------------