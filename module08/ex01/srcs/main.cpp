#include <iostream>
#include <string>
#include "Span.hpp"

int	main(void) {

	Span sp = Span(5);

	try {
		std::cout << "span full exception: " << std::endl;
		// sp.addNumber(6);
		// sp.addNumber(6);
		sp.addNumber(-60);
		sp.addNumber(10);
		// sp.addNumber(-10);
		// sp.addNumber(9);
		// sp.addNumber(10);
		std::cout << "shortest span" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "longest span" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "---------------------------" << std::endl;
		
		try {
			std::cout << "too much number exception: " << std::endl;
			sp.addNumber(10);
			std::cout << "no exception received" << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------" << std::endl;

		try {
			std::cout << "not enough number exception: " << std::endl;
			Span spbis = Span(1);
			spbis.addNumber(10);
			std::cout << spbis.shortestSpan() << std::endl;
			std::cout << "no exception received" << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------" << std::endl;

		std::cout << "no span full exception";
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}