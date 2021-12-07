#include "AAnimal.hpp"

//-----Constructors/Destructors----
AAnimal::AAnimal(void) {
	std::cout << "Constructing AAnimal." << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal (AAnimal const& cpy) {
	std:: cout << "Copy constructor called in AAnimal." << std::endl;
	*this = cpy;
}

AAnimal::~AAnimal(void) {
	std::cout << "Destructing AAnimal." << std::endl;
}
//--------------------------------


//-----------Operators------------
AAnimal & AAnimal::operator=(AAnimal const & src) {
	std::cout << "Assignment operator called in AAnimal." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string AAnimal::getType () const {
	return _type;
}
//--------------------------------


//------------Functions-----------
void AAnimal::makeSound() const {
}
//-------------------------------