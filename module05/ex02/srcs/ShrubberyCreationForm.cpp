#include "ShrubberyCreationForm.hpp"
#include <fstream>

//-----Constructors/Destructors----
ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : AForm(name, 145, 137), _target(target) {
	std::cout << "Constructor called in ShrubberyCreationForm." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy) : AForm(cpy.getName(), cpy.getSign(), cpy.getExec()) {
	std::cout << "Copy constructor called in ShrubberyCreationForm." << std::endl;
	*this = cpy;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "Destructing ShrubberyCreationForm." << std::endl;
}
//--------------------------------

//-----------Operators------------
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	std::cout << "Assignment operator called in ShrubberyCreationForm." << std::endl;
	(void)src;
	return *this;
}
std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const & src) {
	o << src.getName();
	if (src.getSigned() == true)
		o << ", ShrubberyCreationForm signed ";
	else
		o << ", from not signed ";
	o << ", grade to sign " << src.getSign() << ", grade to exec " << src.getExec() << "." << "\n";
	return o;
}
//--------------------------------

//--------Getters/Setters---------
//--------------------------------

//------------Functions-----------
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!(this->getSigned())) {
		executor.executeForm(*this);
		throw NotSignedException("ShrubberyCreationForm not signed.");
	}
	if (executor.getGrade() > this->getExec()) {
		executor.executeForm(*this);
		throw GradeTooLowException("Grade too low to execute ShrubberyCreationForm.");
	}
	std::ofstream	File(_target + "_shrubbery");
	if (File)
	{
		File << "\n\n🌤\n ";
		File << "  ooxoxoo    ooxoo          ooxoxoo    ooxoo\n";
		File << " ooxoxo oo  oxoxooo        ooxoxo oo  oxoxooo\n";
		File << "oooo xxoxoo ooo ooox      oooo xxoxoo ooo ooox\n";
		File << "oxo o oxoxo  xoxxoxo      oxo o oxoxo  xoxxoxo\n";
		File << " oxo xooxoooo o ooo        oxo xooxoooo o ooo\n";
		File << "   ooo\\oo\\  /o/o             ooo\\oo\\  /o/o\n";
		File << "       \\  \\/ /                   \\  \\/ /\n";
		File << "        |   /                     |   /\n";
		File << "        |  |                      |  |\n";
		File << "        | O|                      | O|\n";
		File << "        |  |                      |  |\n";
		File << "        |  |                      |  |\n";
		File << "_______/    \\____🐷🐖__🐷🐖________/   \\______\n";
		File.close();
	}
	else
		throw FileNotOpened("Error : File could not be opened.");
	executor.executeForm(*this);
}
//--------------------------------
