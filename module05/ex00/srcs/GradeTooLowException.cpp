#include "GradeTooLowException.hpp"

//-----Constructors/Destructors----
GradeTooLowException::GradeTooLowException(std::string std) : _messageErr(std) {
	std::cout << "Constructing GradeTooLowException." << std::endl;
}
GradeTooLowException::~GradeTooLowException(void) throw() {
	std::cout << "Destructing GradeTooLowException." << std::endl;
}
//--------------------------------


//-----------Operators------------
//--------------------------------


//--------Getters/Setters---------
//--------------------------------

//------------Functions-----------
const char* GradeTooLowException::what() const throw()
{
	return _messageErr.c_str();
}
//-------------------------------