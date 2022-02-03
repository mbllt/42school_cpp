#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {
	try
	{
		std::cout << "\n------------------------------\n\n";

		Bureaucrat	Paul("Paul", 2);
		Bureaucrat	Fabrice("Fabrice", 74);
		std::cout << Fabrice << std::endl;
		std::cout << Paul << std::endl;
		Paul.moveUpGrade();
		Fabrice.moveDownGrade();
		std::cout << Fabrice << std::endl;
		std::cout << Paul << std::endl;

		std::cout << "\n\n------------------------------\n\n";

		Bureaucrat jiji("JIJI", 2);
		ShrubberyCreationForm nuit("NUIT", "jardin");
	
		std::cout << nuit;
		nuit.beSigned(jiji);
		std::cout << nuit;

		Bureaucrat test("TEST", 50);
		ShrubberyCreationForm blop("BLOP", "immeuble");
	
		std::cout << std::endl;
		blop.beSigned(test);
		std::cout << blop;
		blop.execute(jiji);

		std::cout << "\n\n------------------------------\n\n";
	}
	catch (const ShrubberyCreationForm::GradeTooLowException& e) {
		std::cerr << "Catched a GradeTooLowException from ShrubberyCreationForm: " << '\n';
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
