#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

//	tableaux de pointeurs sur fonctions

int	main(void) {
	try
	{
		std::cout << "\n------------------------------\n\n";

		Intern someRandomIntern;
		Bureaucrat boss("Boss", 75);
		AForm* rrf;

		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		rrf->beSigned(boss);
		boss.executeForm(*rrf);

		std::cout << "\n\n------------------------------\n\n";

		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		rrf->beSigned(boss);
		boss.executeForm(*rrf);

		std::cout << "\n\n------------------------------\n\n";

		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		rrf->beSigned(boss);
		boss.executeForm(*rrf);

		delete rrf;

		std::cout << "\n\n------------------------------\n\n";
	}
	catch (const ShrubberyCreationForm::GradeTooLowException& e) {
		std::cerr << "Catched a GradeTooLowException : " << '\n';
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
