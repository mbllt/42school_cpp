#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
AForm* Intern::makeForm(std::string formName, std::string target) const {
	if (formName != "ShrubberyCreationForm" ||
		formName != "RobotomyRequestForm" ||
		formName != "PresidentialPardonForm")
		throw FormNotExistentException("Form does not exist.");
	if (formName == "ShrubberyCreationForm") {
		ShrubberyCreationForm* newForm(formName, target);
		return newForm;
	}
	std::cout << "Intern creates " << formName << "." << std::endl;
}
//--------------------------------
