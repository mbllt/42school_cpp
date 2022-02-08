#include "scalaire.hpp"

bool	parse_char(std::string input) {
	if (!isgraph(input[0]) || isdigit(input[0]) || input.size() > 1)
		return false;
	return true;
}

bool	parse_int(std::string input) {
	size_t i = 0;

	if (input[i] == '-') {
		i++;
		if (!input[i])
			return false;
	}
	while (i++ < input.size())
		if (!isdigit(input[i]) && input[i])
			return false;
	return true;
}

bool	parse_double(std::string input) {
	size_t i = 0;

	if (input[i] == '-')
		i++;
	while (i++ < input.size())
		if (!isdigit(input[i]))
			break;
	if (input[i] != '.')
		return false;
	while (++i < input.size())
		if (!isdigit(input[i]))
			return false;
	return true;
}

bool	parse_float(std::string input) {
	size_t i = 0;

	if (input[i] == '-')
		i++;
	while (i++ < input.size())
		if (!isdigit(input[i]))
			break;
	if (input[i] != '.')
		return false;
	while (++i < input.size())
		if (!isdigit(input[i]))
			break;
	if (input[i] != 'f' || input[i + 1])
		return false;
	return true;
}

t_type	parsing(std::string input) {
	if (parse_char(input))
		return _char;
	else if (parse_int(input))
		return _int;
	else if (parse_double(input))
		return _double;
	else if (parse_float(input))
		return _float;
	else
		throw InvalidInputException("Input invalid.");
}