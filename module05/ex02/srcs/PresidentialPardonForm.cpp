#include "PresidentialPardonForm.hpp"

//-----Constructors/Destructors----
PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : AForm(name, 25, 5), _target(target) {
	std::cout << "Constructor called in PresidentialPardonForm." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cpy) : AForm(cpy.getName(), cpy.getSign(), cpy.getExec()) {
	std::cout << "Copy constructor called in PresidentialPardonForm." << std::endl;
	*this = cpy;
}
PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "Destructing PresidentialPardonForm." << std::endl;
}
//--------------------------------

//-----------Operators------------
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	std::cout << "Assignment operator called in PresidentialPardonForm." << std::endl;
	(void)src;
	return *this;
}
std::ostream& operator<<(std::ostream& o, PresidentialPardonForm const & src) {
	o << src.getName();
	if (src.getSigned() == true)
		o << ", PresidentialPardonForm signed ";
	else
		o << ", from not signed ";
	o << ", grade to sign " << src.getSign() << ", grade to exec " << src.getExec() << "." << "\n";
	return o;
}
//--------------------------------

//--------Getters/Setters---------
//--------------------------------

//------------Functions-----------
void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	std::cout << _target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}
//--------------------------------
