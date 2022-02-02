#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	Paul("Paul", -20000);
	Bureaucrat	Fabrice("Fabrice", 150);

	std::cout << "\n\n------------------------------\n\n";

	std::cout << Fabrice;
	std::cout << Paul;
	Paul.moveUpGrade();
	Fabrice.moveDownGrade();
	std::cout << Fabrice;
	std::cout << Paul;

	std::cout << "\n\n------------------------------\n\n";
	return (0);
}
