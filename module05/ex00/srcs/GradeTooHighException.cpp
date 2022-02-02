#include "GradeTooHighException.hpp"

//-----Constructors/Destructors----
GradeTooHighException::GradeTooHighException(std::string std) : _messageErr(std) {
	std::cout << "Constructing GradeTooHighException." << std::endl;
}
GradeTooHighException::~GradeTooHighException(void) throw() {
	std::cout << "Destructing GradeTooHighException." << std::endl;
}
//--------------------------------


//-----------Operators------------
//--------------------------------


//--------Getters/Setters---------
//--------------------------------

//------------Functions-----------
const char* GradeTooHighException::what() const throw()
{
	return _messageErr.c_str();
}
//-------------------------------