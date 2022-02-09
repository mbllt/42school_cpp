#include "scalaire.hpp"

void	displayChar(char checkChar, double limits) {
	if (limits > 0 && limits < 128) {
		if (isgraph(checkChar))
			std::cout << "char : '" << checkChar << "'" << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
	}
	else
		std::cout << "char : impossible" << std::endl;
}

void	displayInt(int checkInt, double limits) {
	if (limits >= -2147483648 && limits < 2147483648)
		std::cout << "int : " << checkInt << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
}

void	convertChar(char input) {

	displayChar(static_cast<char>(input), 1);
	displayInt(static_cast<int>(input), 1);
	std::cout << "float : " << static_cast<float>(input) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(input) << ".0" << std::endl;
}

void	convertInt(int input) {
	if (input == -1)
		throw InvalidInputException("Invalid input, probably because its too long.");

	displayChar(static_cast<char>(input), input);
	displayInt(static_cast<int>(input), 1);
	std::cout << "float : " << static_cast<float>(input) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(input) << ".0" << std::endl;
}

void	convertFloat(float input) {
	if (input == -1)
		throw InvalidInputException("Invalid input, probably because its too long.");

	displayChar(static_cast<char>(input), input);
	displayInt(static_cast<int>(input), input);
	std::cout << "float : " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(input) << std::endl;
}

void	convertDouble(double input) {
	if (input == -1)
		throw InvalidInputException("Invalid input, probably because its too long.");

	displayChar(static_cast<char>(input), input);
	displayInt(static_cast<int>(input), input);
	std::cout << "float : " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(input) << std::endl;
}

void	convert(std::string input, t_type type) {
	if (input == "-1" || input == "-1.0" || input == "-1.0f") {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : -1" << std::endl;
		std::cout << "float : -1.0f" << std::endl;
		std::cout << "double : -1.0" << std::endl;
		return;
	}
	switch (type) {
		case (_char):
			convertChar(input[0]);
			break;
		case (_int):
			convertInt(atoi(input.c_str()));
			break;
		case (_float):
			convertFloat(strtof(input.c_str(), NULL));
			break;
		case (_double):
			convertDouble(atof(input.c_str()));
			break;
	}
}