/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballet <mballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:55:30 by mballet           #+#    #+#             */
/*   Updated: 2021/11/22 12:23:53 by mballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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