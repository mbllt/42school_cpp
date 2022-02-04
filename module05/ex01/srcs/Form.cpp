#include "Form.hpp"

//-----Constructors/Destructors----
Form::Form(std::string name, int sign, int exec) : _name(name), _signed(false) {
	if (sign < 1 || exec < 1) {
		throw GradeTooHighException("Grade too high to assign.");
	}
	if (sign > 150 || exec > 150) {
		throw GradeTooLowException("Grade too low to assign.");
	}
	std::cout << "Constructing Form." << std::endl;
	_sign = sign;
	_exec = exec;
}
Form::Form (Form const& cpy) {
	std:: cout << "Copy constructor called in Form." << std::endl;
	*this = cpy;
}
Form::~Form(void) {
	std::cout << "Destructing Form." << std::endl;
}
//--------------------------------

//-----------Operators------------
Form & Form::operator=(Form const & src) {
	std::cout << "Assignment operator called in Form." << std::endl;
	(void)src;
	return *this;
}
std::ostream& operator<<(std::ostream& o, Form const & src) {
	o << src.getName();
	if (src.getSigned() == true)
		o << ", form signed ";
	else
		o << ", from not signed ";
	o << ", grade to sign " << src.getSign() << ", grade to exec " << src.getExec() << "." << "\n";
	return o;
}
//--------------------------------

//--------Getters/Setters---------
std::string Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

int Form::getSign() const {
	return _sign;
}

int Form::getExec() const {
	return _exec;
}
//--------------------------------

//------------Functions-----------
void Form::beSigned(Bureaucrat const & src) {
	if (src.getGrade() > _sign)
	{
		src.signForm(*this);
		throw GradeTooLowException("Grade too low to sign.");
	}
	_signed = true;
	src.signForm(*this);
}
//--------------------------------
