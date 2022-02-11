#include "main.hpp"

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
	_type = "Animal";
	(void)src;
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



//-----Constructors/Destructors----
WrongAnimal::WrongAnimal(void) {
	std::cout << "Constructing WrongAnimal." << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal (WrongAnimal const& cpy) {
	std:: cout << "Copy constructor called in WrongAnimal." << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructing WrongAnimal." << std::endl;
}
//--------------------------------


//-----------Operators------------
WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src) {
	std::cout << "Assignment operator called in WrongAnimal." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string WrongAnimal::getType () const {
	return _type;
}
//--------------------------------


//------------Functions-----------
void WrongAnimal::makeSound() const {
	std::cout << "****hello, im a WrongAnimal****" << std::endl;
}
//-------------------------------