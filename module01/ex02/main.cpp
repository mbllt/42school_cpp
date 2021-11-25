#include <cstdlib>
#include <string>
#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << *stringPTR << " : " << stringPTR << std::endl;
	std::cout << stringREF << " : " << &stringREF << std::endl;
	return (0);
}