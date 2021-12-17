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
	(void)src;
	_type = "Cat";
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
//--------------------------------


//------------Functions-----------
void Cat::makeSound() const {
	std::cout << "****Miaou, im a cat****" << std::endl;
}
//-------------------------------



//-----Constructors/Destructors----
WrongCat::WrongCat(void) {
	std::cout << "Constructing WrongCat" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat (WrongCat const& cpy) {
	std:: cout << "Copy constructor called in WrongCat." << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat(void) {
	std::cout << "Destructing WrongCat." << std::endl;
}
//--------------------------------


//-----------Operators------------
WrongCat & WrongCat::operator=(WrongCat const & src) {
	std::cout << "Assignment operator called in WrongCat." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
//--------------------------------


//------------Functions-----------
void WrongCat::makeSound() const {
	std::cout << "****Miaou, im a WrongCat****" << std::endl;
}
//-------------------------------