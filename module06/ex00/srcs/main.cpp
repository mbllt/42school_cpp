#include <iostream>
#include <string>
#include "InvalidInputException.hpp"

int	main(int argc, char **argv) {

	try {
		if (argc != 2)
			throw InvalidInputException("Number of args invalid.");
		
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
