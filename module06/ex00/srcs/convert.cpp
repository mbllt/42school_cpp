#include "scalaire.hpp"

void	convertChar(std::string input) {
	
}

void	convertInt(std::string input) {
	
}

void	convertFloat(std::string input) {
	
}

void	convertDouble(std::string input) {
	
}

void	convert(std::string input, t_type type) {
	switch (type) {
		case (_char):
			convertChar(input);
			break;
		case (_int):
			convertInt(input);
			break;
		case (_float):
			convertFloat(input);
			break;
		case (_double):
			convertDouble(input);
			break;
	}
}