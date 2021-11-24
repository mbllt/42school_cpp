#include "main.hpp"

Contact	fill_contact(int i)
{
	Contact	contact;
	std::string input;

	std::cout << "Firstname : ";
	std::cin >> input;
	if (input.empty())
		input = " ";
	contact.set_firstname(input);
	std::cout << "Lastname : ";
	std::cin >> input;
	if (input.empty())
		input = " ";
	contact.set_lastname(input);
	std::cout << "Nickname : ";
	std::cin >> input;
	if (input.empty())
		input = " ";
	contact.set_nickname(input);
	std::cout << "Phone number : ";
	std::cin >> input;
	if (input.empty())
		input = " ";
	contact.set_phonenum(input);
	std::cout << "Darkest secret : ";
	std::cin >> input;
	if (input.empty())
		input = " ";
	contact.set_darkest_secret(input);
	std::cout << "Contact registered sucessfully" << std::endl;
	
	contact.index = i;
	return contact;
}

bool	valid_str(std::string str)
{
	for (unsigned long int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) || str[0] == '-')
			return (false);
	}	
	return (true);
}

bool	valid_tmp(long int tmp)
{
	if (tmp > 2147483648 || tmp < -2147483649)
		return (false);
	return (true);
}

int	nbr_contact(Phonebook phonebook)
{
	int i = 0;
	Contact tmp;
	std::string tmp_bis = "begin";
	while (!tmp_bis.empty() && i < 8)
	{
		tmp = phonebook.get_contact(i);
		tmp_bis = tmp.get_firstname();
		i++;
	}
	return (i);
}

int	main(void)
{
	int i = -1;
	std::string str;
	Phonebook	phonebook;

	std::cout << "Hi, you've entered this brand new phonebook manager" << std::endl;
	std::cout << "You can navigate throught it with either the ADD, SEARCH or EXIT command" << std::endl;
	while (str != "EXIT")
	{
		std::cout << "> ";
		std::cin >> str;
		if (str == "ADD")
		{
			if (i == -1)
				i = 0;
			phonebook.set_contact(fill_contact(i), i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (str == "SEARCH")
		{
			if (i == -1)
				continue ;
			phonebook.print_contacts();
			int nbr = nbr_contact(phonebook);
			int tmp = -1;
			while (tmp < 0 || tmp >= nbr)
			{
				std::cout << "nbr :" << nbr << std::endl;
				std::string str;
				std::cout << "Choose a valid index : ";
				std::cin >> str;
				if (str.empty())
					return (0);
				if (!valid_str(str))
					continue;
				tmp = atol(str.c_str());
			}
			phonebook.print_contact(tmp);
		}
		else if (str == "EXIT")
		{
			continue;
		}
		else if (str.empty())
		{
			return (0);
		}
		else
		{
			std::cout << "No valid input, try again" << std::endl;
		}
	}
	return (0);
}