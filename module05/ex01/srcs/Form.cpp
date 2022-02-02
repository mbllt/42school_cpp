#include "Form.hpp"

//-----Constructors/Destructors----
Form::Form(void) : _signed(false) {
	std::cout << "Constructing Form." << std::endl;

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
}\
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
