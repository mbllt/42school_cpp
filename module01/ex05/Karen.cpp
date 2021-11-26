#include "Karen.hpp"

Karen::Karen (void) {


}

Karen::~Karen (void) {


}

void Karen::debug (void) {

	std::cout << "[ DEBUG ]\n" << "I love to get extra bacon for my"
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< "I just love it" << std::endl;
}

void Karen::info (void) {

	std::cout << "[ INFO ]\n" << "I cannot believe adding extra"
				<< "bacon cost more money. You don’t put enough!"
				<< "If you did I would not have to ask for it!" << std::endl;

}

void Karen::warning (void) {

	std::cout << "[ WARNING ]\n" << "I think I deserve to have"
				<< "some extra bacon for free. I’ve been coming here"
				<< "for years and you just started working here last month." << std::endl;
}

void Karen::error (void) {

	std::cout << "[ ERROR ]\n" << "This is unacceptable,"
				<< "I want to speak to the manager now." << std::endl;
}

void Karen::complain (std::string level) {

	std::string	index[4];

	index[0] = "DEBUG";
	index[1] = "INFO";
	index[2] = "WARNING";
	index[3] = "ERROR";

	int i = -1;
	while (i < 4 && index[i] != level)
		i++;

	void (Karen::*message[4])(void);
	
	message[0] = &Karen::debug;
	message[1] = &Karen::info;
	message[2] = &Karen::warning;
	message[3] = &Karen::error;
	if (i > 0 && i < 4)
		(this->*message[i])();
}
