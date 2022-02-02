#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	Paul("Paul", 1);
	Bureaucrat	Fabrice("Fabrice", 150);

	std::cout << "\n\n------------------------------\n\n";

	std::cout << Fabrice << std::endl;
	std::cout << Paul << std::endl;
	Paul.moveUpGrade();
	Fabrice.moveDownGrade();
	std::cout << Fabrice << std::endl;
	std::cout << Paul << std::endl;

	std::cout << "\n\n------------------------------\n\n";

	try
		{
			Bureaucrat op("jiji", 1);
	
			std::cout << op  << std::endl;
			op.moveUpGrade();
			std::cout << op  << std::endl;
			op.moveDownGrade();
			op.moveDownGrade();
			std::cout << op  << std::endl;   
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	std::cout << "\n\n------------------------------\n\n";
	return (0);
}
