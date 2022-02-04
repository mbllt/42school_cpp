#include "Bureaucrat.hpp"

//-----Constructors/Destructors----
Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(0) {
	if (grade > 150 || grade < 1)
		throw GradeTooLowException("Invalid grade.");
	std::cout << "Constructing Bureaucrat." << std::endl;
	_grade = grade;
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
	if (_grade <= 1)
		throw GradeTooHighException("The bureaucrat is already as high as they can be.");
	_grade--;
	std::cout << "Moving up " << _name << "." << std::endl;
}
void Bureaucrat::moveDownGrade() {
	if (_grade >= 150)
		throw GradeTooLowException("The bureaucrat is already as low as they can be.");
	_grade++;
	std::cout << "Moving down " << _name << "." << std::endl;
}
void Bureaucrat::signForm(AForm const & form) const {
	if (form.getSigned() == true) {
		std::cout << _name << " signed " << form.getName() << "." << "\n";
	}
	else {
		std::cout << _name << " couldnt sign " << form.getName() << " because grade insufficient." << "\n";
	}
}
void Bureaucrat::executeForm(AForm const & form) const {
	if (!form.getSigned()) {
		throw NotSignedException("Form not signed.");
	}
	if (_grade > form.getExec()) {
		throw GradeTooLowException("Grade too low to execute the form.");
	}
	form.execute(*this);
	std::cout << _name << " executed " << form.getName() << "." << "\n";
}
//-------------------------------