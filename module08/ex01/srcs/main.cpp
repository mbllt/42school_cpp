#include <iostream>
#include <string>
#include "Span.hpp"

int	main(void) {

	Span sp = Span(5);

	try {
		sp.addNumber(6);
		sp.addNumber(1);
		sp.addNumber(-10);
		sp.addNumber(9);
		sp.addNumber(10);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}