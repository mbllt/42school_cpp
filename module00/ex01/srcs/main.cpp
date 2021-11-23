#include "../includes/main.hpp"

int	main(void)
{
	std::string str;
	Phonebook	phonebook;

	while (str != "EXIT")
	{
		int i = 0;
		std::cin >> str;
		if (str == "ADD")
		{
			std::string input;

			std::cout << "Firstname : " << std::endl;
			std::cin >> input;
			phonebook.contact[i].set_firstname(input);
			std::cout << "Lastname : " << std::endl;
			std::cin >> input;
			phonebook.contact[i].set_lastname(input);
			std::cout << "Nickname : " << std::endl;
			std::cin >> input;
			phonebook.contact[i].set_nickname(input);
			std::cout << "Phone number : " << std::endl;
			std::cin >> input;
			phonebook.contact[i].set_phonenum(input);
			std::cout << "Darkest secret : " << std::endl;
			std::cin >> input;
			phonebook.contact[i].set_darkest_secret(input);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (str == "SEARCH")
		{
			for (int i = 0; i < 8; i++)
			{
				// std::string tmp = phonebook.contact[i].get_firstname();
				// if (tmp)
				// {
					std::cout << phonebook.contact[i].get_firstname() << std::endl;
					std::cout << phonebook.contact[i].get_lastname() << std::endl;
					std::cout << phonebook.contact[i].get_nickname() << std::endl;
					std::cout << phonebook.contact[i].get_phonenum() << std::endl;
					std::cout << phonebook.contact[i].get_darkest_secret() << std::endl;
				// }
			}
		}
		else if (str == "EXIT")
		{
			std::cout << "I have entered EXIT" << std::endl;
		}
		else
		{
			std::cout << "No valid input, try again" << std::endl;
		}
	}
	return (0);
}