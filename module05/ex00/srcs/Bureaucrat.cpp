#include "Bureaucrat.hpp"
#include <string>
#include <stdexcept>

//-----Constructors/Destructors----
Bureaucrat::Bureaucrat(std::string const name, unsigned short int grade) : _name(name) {
	std::cout << "Constructing Bureaucrat with name and grade." << std::endl;
	try {
			if (grade > 150 || grade < 1)
				throw std::string("Invalid grade mate.");
			_grade = grade;
	}
	catch (std::string const& e)
	{
		std::cout << e << std::endl;
	}
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
	try {
		if (_grade < 2)
			throw std::string(" is already as high as they can be.");
		_grade--;
		std::cout << "Moving up " << _name << "." << std::endl;
	}
	catch (std::string const& e)
	{
		std::cout << _name << e << std::endl;
	}
}

void Bureaucrat::moveDownGrade() {
	try {
		if (_grade > 149)
			throw std::string(" is already as low as they can be.");
		_grade++;
		std::cout << "Moving down " << _name << "." << std::endl;
	}
	catch (std::string const& e)
	{
		std::cout << _name << e << std::endl;
	}
}

void Bureaucrat::display() const {
	std::cout << "Name : " << _name << " | Grade : " << _grade << std::endl;
}
//-------------------------------