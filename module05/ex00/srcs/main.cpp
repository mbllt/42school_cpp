#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int	main(void) {


	try
	{
		std::cout << "\n\n------------------------------\n\n";

		Bureaucrat	Paul("Paul", 2);
		Bureaucrat	Fabrice("Fabrice", 74);
		std::cout << Fabrice << std::endl;
		std::cout << Paul << std::endl;
		Paul.moveUpGrade();
		Fabrice.moveDownGrade();
		std::cout << Fabrice << std::endl;
		std::cout << Paul << std::endl;

		std::cout << "\n\n------------------------------\n\n";

		Bureaucrat op("jiji", 150);

		std::cout << op  << std::endl;
		op.moveUpGrade();
		std::cout << op  << std::endl;
		op.moveDownGrade();
		op.moveDownGrade();
		std::cout << op  << std::endl;

		std::cout << "\n\n------------------------------\n\n";
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Catched a GradeTooLowException : " << '\n';
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
