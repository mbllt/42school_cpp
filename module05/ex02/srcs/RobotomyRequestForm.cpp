#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

//-----Constructors/Destructors----
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "Constructor called in RobotomyRequestForm." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpy) : AForm(cpy.getName(), cpy.getSign(), cpy.getExec()) {
	std::cout << "Copy constructor called in RobotomyRequestForm." << std::endl;
	*this = cpy;
}
RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "Destructing RobotomyRequestForm." << std::endl;
}
//--------------------------------

//-----------Operators------------
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
	std::cout << "Assignment operator called in RobotomyRequestForm." << std::endl;
	(void)src;
	return *this;
}
std::ostream& operator<<(std::ostream& o, RobotomyRequestForm const & src) {
	o << src.getName();
	if (src.getSigned() == true)
		o << ", RobotomyRequestForm signed ";
	else
		o << ", from not signed ";
	o << ", grade to sign " << src.getSign() << ", grade to exec " << src.getExec() << "." << "\n";
	return o;
}
//--------------------------------

//--------Getters/Setters---------
//--------------------------------

//------------Functions-----------
void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	std::cout << "Brrrrr! Brrrr! Brrrr!" << std::endl;
	srand (time(NULL));
	int random = rand() % 2;
	if (!random) {
		throw NotRobotomisedException("Couldnt be robotomised.");
	}
	std::cout << "Could be robotomised." << std::endl;
}
//--------------------------------
