#include "Form.hpp"

//-----Constructors/Destructors----
Form::Form(std::string name, int sign, int exec) : _name(name), _signed(false) {
	std::cout << "Constructing Form." << std::endl;
	try {
		if (sign < 1 || exec < 1) {
			throw GradeTooHighException("Grade too high for sign or exec actions.");
			if (sign < 1)
				_sign = 150;
			if (exec < 1)
				_exec = 150; // I wanna do that in this exception but how do i know in which one i am in ?
		}
		if (sign > 150 || exec > 150) {
			throw GradeTooLowException("Grade too low for sign or exec actions.");
			if (sign > 150)
				_sign = 150;
			if (exec > 150)
				_exec = 150;
		}
		_sign = sign;
		_exec = exec;
	}
	catch (std::exception & e) {
		std::cout << "ERROR : " << e.what() << "\n";
	}
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
	o << src.getName() << ", form signed " << src.getSigned() << ", grade to sign " << src.getSign() << ", grade to exec " << src.getExec() << "." << "\n";
	return o;
}
//--------------------------------

//--------Getters/Setters---------
std::string Form::getName() const {
	return _name;
}

int Form::getSigned() const {
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
//-------------------------------
