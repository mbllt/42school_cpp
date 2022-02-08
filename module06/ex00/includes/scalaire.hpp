#ifndef SCALAIRE_HPP
#define SCALAIRE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "InvalidInputException.hpp"

typedef enum e_type {
	_char,
	_int,
	_float,
	_double
}	t_type;

t_type	parsing(std::string input);
void	convert(std::string input, t_type type);

#endif