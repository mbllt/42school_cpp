#include "Dog.hpp"

//-----Constructors/Destructors----
Dog::Dog(void) {
	std::cout << "Constructing Dog" << std::endl;
	_type = "Dog";
	(void)_brain;
	_brain = new Brain();
}

Dog::Dog(Dog const& cpy) {
	std:: cout << "Copy constructor called in Dog." << std::endl;
	_brain = new Brain();
	*this = cpy;
}

Dog::~Dog(void) {
	delete (_brain);
	std::cout << "Destructing Dog." << std::endl;
}
//--------------------------------


//-----------Operators------------
Dog & Dog::operator=(Dog const & src) {
	std::cout << "Assignment operator called in Dog." << std::endl;
	_type = src.getType();
	for (int i = 0; i < 100; i++)
	{
		_brain->setIdea(i, src.getBrain()->getIdea(i));
	}
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
Brain *	Dog::getBrain() const {
	return (_brain);
}
//--------------------------------


//------------Functions----------
void Dog::makeSound() const {
	std::cout << "****Wouf, im a dog****" << std::endl;
}
//-------------------------------
