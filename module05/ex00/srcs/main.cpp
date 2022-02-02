#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	Paul("Paul", 20);
	Bureaucrat	Fabrice("Fabrice", 150);

	std::cout << "\n\n------------------------------\n\n";

	Paul.display();
	Fabrice.display();
	Paul.moveUpGrade();
	Fabrice.moveDownGrade();
	Paul.display();
	Fabrice.display();

	std::cout << "\n\n------------------------------\n\n";
	return (0);
}
