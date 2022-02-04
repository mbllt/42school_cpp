#include "Intern.hpp"

//-----Constructors/Destructors----
Intern::Intern(void) {
	std::cout << "Constructor called in Intern." << std::endl;
}
Intern::~Intern(void) {
	std::cout << "Destructing Intern." << std::endl;
}
//--------------------------------

//-----------Operators------------
Intern & Intern::operator=(Intern const & src) {
	std::cout << "Assignment operator called in Intern." << std::endl;
	(void)src;
	return *this;
}
//--------------------------------

//--------Getters/Setters---------
//--------------------------------

//------------Functions-----------
AForm* Intern::makeForm(std::string name, std::string target) const {
	if (!target)	// dont know how to do that
		throw FormNotExistentException("Form does not exist.");
	std::cout << "Intern creates " << name << "." << std::endl;	// name being the form
}
//--------------------------------
