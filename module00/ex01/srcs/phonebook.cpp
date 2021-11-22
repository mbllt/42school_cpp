#include "phonebook.hpp"

int	main(void)
{
	std::string str;

	while (str != "EXIT")
	{
		std::cin >> str;
		if (str == "ADD")
			std::cout << "I have entered ADD" << std::endl;
		else if (str == "SEARCH")
			std::cout << "I have entered SEARCH" << std::endl;
		else if (str == "EXIT")
			std::cout << "I have entered EXIT" << std::endl;
	}
	return (0);
}