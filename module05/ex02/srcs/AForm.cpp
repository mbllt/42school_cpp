#include "AForm.hpp"

//-----Constructors/Destructors----
AForm::AForm(std::string name, int sign, int exec) : _name(name), _signed(false), _sign(0), _exec(0) {
	if (sign < 1 || exec < 1) {
		throw GradeTooHighException("Grade too high to assign.");
	}
	if (sign > 150 || exec > 150) {
		throw GradeTooLowException("Grade too low to assign.");
	}
	std::cout << "Constructing AForm." << std::endl;
	_sign = sign;
	_exec = exec;
}
AForm::AForm (AForm const& cpy) {
	std:: cout << "Copy constructor called in AForm." << std::endl;
	*this = cpy;
}
AForm::~AForm(void) {
	std::cout << "Destructing AForm." << std::endl;
}
//--------------------------------

//-----------Operators------------
AForm & AForm::operator=(AForm const & src) {
	std::cout << "Assignment operator called in Form." << std::endl;
	(void)src;
	return *this;
}
std::ostream& operator<<(std::ostream& o, AForm const & src) {
	o << src.getName();
	if (src.getSigned() == true)
		o << ", form signed ";
	else
		o << ", form not signed ";
	o << ", grade to sign " << src.getSign() << ", grade to exec " << src.getExec() << "." << "\n";
	return o;
}
//--------------------------------

//--------Getters/Setters---------
std::string AForm::getName() const {
	return _name;
}

bool AForm::getSigned() const {
	return _signed;
}

int AForm::getSign() const {
	return _sign;
}

int AForm::getExec() const {
	return _exec;
}
//--------------------------------

//------------Functions-----------
void AForm::beSigned(Bureaucrat const & src) {
	if (src.getGrade() > _sign)
		throw GradeTooLowException("Grade too low to sign.");
	_signed = true;
}
//--------------------------------
