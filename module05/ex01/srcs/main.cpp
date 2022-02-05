#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Form nuit("NUIT", 50, 20);
	
		std::cout << nuit;
		nuit.beSigned(jiji);
		std::cout << nuit;

		Bureaucrat test("TEST", 50);
		Form blop("BLOP", 40, 30);
	
		std::cout << std::endl;
		blop.beSigned(test);
		std::cout << blop;

		std::cout << "\n\n------------------------------\n\n";
	}
	catch (const Form::GradeTooLowException& e) {
		std::cerr << "Catched a GradeTooLowException : " << '\n';
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
