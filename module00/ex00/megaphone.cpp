/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballet <mballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:56:52 by mballet           #+#    #+#             */
/*   Updated: 2021/11/22 11:57:00 by mballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		std::locale loc;
		for (int i = 1; i < argc; i++)
		{
			std::string s = argv[i];;
			for (std::string::size_type j = 0; j < s.length(); j++)
			{
				std::cout << std::toupper(s[j], loc);
			}
		}
		std::cout << "\n";
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}