#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
AForm* createShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}
AForm* createRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}
AForm* createPresident(std::string target) {
	return new PresidentialPardonForm(target);
}
AForm* createForm() {
}
AForm* Intern::makeForm(std::string formName, std::string target) const {
	std::string form[3] {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	int i = 0;
	while (i < 3 && formName != form[i])
		i++;

	AForm* (*createForm)(form);
}
//--------------------------------
