#include "Bureaucrat.hpp"

//-----Constructors/Destructors----
Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	std::cout << "Constructing Bureaucrat." << std::endl;
	try {
			if (grade > 150 || grade < 1)
				throw GradeTooLowException("Invalid grade.");
			_grade = grade;
	}
	catch (std::exception const& e)
	{
		_grade = 150;
		std::cout << "ERREUR : " << e.what() << std::endl;
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
std::ostream & operator<<(std::ostream & o, Bureaucrat const & src) {
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return o;
}
//--------------------------------
//--------Getters/Setters---------
std::string Bureaucrat::getName() const {
	return _name;
}
int Bureaucrat::getGrade() const {
	return _grade;
}
//--------------------------------
//------------Functions-----------
void Bureaucrat::moveUpGrade() {
	try {
		if (_grade < 2)
			throw GradeTooHighException(" is already as high as they can be.");
		_grade--;
		std::cout << "Moving up " << _name << "." << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << "ERREUR : " << _name << e.what() << std::endl;
	}
}
void Bureaucrat::moveDownGrade() {
	try {
		if (_grade > 149)
			throw GradeTooLowException(" is already as low as they can be.");
		_grade++;
		std::cout << "Moving down " << _name << "." << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << "ERREUR : " << _name << e.what() << std::endl;
	}
}
//-------------------------------