#include "Bureaucrat.hpp"

//-----Constructors/Destructors----
Bureaucrat::Bureaucrat(void) {
	std::cout << "Constructing Bureaucrat." << std::endl;
}

Bureaucrat::Bureaucrat (Bureaucrat const& cpy) {
	std:: cout << "Copy constructor called in Bureaucrat." << std::endl;
	*this = cpy;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Destructing Bureaucrat." << std::endl;
}
//--------------------------------


//-----------Operators------------
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
	std::cout << "Assignment operator called in Bureaucrat." << std::endl;
	(void)src;
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string Bureaucrat::getName() const {
	return _name;
}

unsigned short int Bureaucrat::getGrade() const {
	return _grade;
}
//--------------------------------

//------------Functions-----------
void Bureaucrat::moveUpGrade() {
	try
	{
		_grade--;
		throw GradeTooHighException;
	}
	catch (GradeTooHighException const& e)
	{
		std::cout << "Your're already as high as you can be, enjoy." << std::endl;
	}
}

void Bureaucrat::moveDownGrade() {
	try
	{
		_grade > 150;
		_grade++;
		throw GradeTooLowException;
	}
	catch (GradeTooLowException const& e)
	{
		std::cout << "Your're already as low as you can be, soryy pal." << std::endl;
	}
}
//-------------------------------